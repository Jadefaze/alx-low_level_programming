#include "main.h"

/**
 * read_textfile - to read text from file and print to stdout (POSIX)
 * @filename: the textfile name
 * @letters: number of letters to be read and printed
 * Return: actual number of elements read and printed else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesRead, bytesWritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = (char *)malloc(sizeof(size_t) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytesRead = read(fd, buffer, letters);

	if (bytesRead == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (bytesWritten == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);

	return (bytesWritten);
}
