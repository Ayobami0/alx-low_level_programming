#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Read and write the contents of a
 * text file to standard output.
 *
 * @filename: Pointer to the name of the text file to read.
 * @letters: The maximum number of characters to read from the file.
 *
 * Return: The number of characters successfully
 * read and written to the standard output,
 * or 0 if an error occurs or if the file is empty.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t count;
	int fd, n_write;
	char buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	n_write = count = 0;
	while (read(fd, &buff, 1) > 0 && count != letters)
	{
		n_write = write(STDOUT_FILENO, &buff, 1);
		if (n_write < 0)
			return (0);
		else if (n_write == 0)
			break;
		count++;
	}

	return (count);
}
