#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define BUF_SIZE 1024

void cp(char *file_from, char *file_to);

/**
 * main - Entry point of the cp program.
 *
 * This function copies the contents of a file specified
 * by `file_from` to
 * another file specified by `file_to`.
 *
 * @argc: Number of arguments.
 * @argv: Array of pointers to arguments.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp(argv[1], argv[2]);
	return (0);
}

/**
 * cp - Copy file contents from one file to another.
 *
 * This function copies the contents of the file
 * specified by `file_from` to the file specified by `file_to`.
 *
 * @file_from: Source file name.
 * @file_to: Destination file name.
 */
void cp(char *file_from, char *file_to)
{
	int fd_to, fd_from, n_read,
	n_write;
	char buf[BUF_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
{

	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(
		file_to,
		O_RDWR | O_CREAT | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH
	);

	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	do {
		n_read = read(fd_from, buf, BUF_SIZE);
		if (n_read < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			exit(99);
		}
		if (n_read < BUF_SIZE)
			buf[n_read + 1] = '\0';
		n_write = write(fd_to, buf, n_read);
		if (n_write < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			exit(99);
		}
	} while (n_read != 0);

	if (close(fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	if (close(fd_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
}
