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
		ssize_t count;
		int fd;
		char buff;

		if (filename == NULL)
			return (0);

		fd = open(filename, O_RDONLY);

		if (fd <= 0)

		while (read(fd, &buff, 1) > 0 && (int)count != (int)letters)
		{
			if (write(STDOUT_FILENO, &buff, 1) <= 0)
			{
				return (0);
			}
			count++;
		}

	return (count);
}
