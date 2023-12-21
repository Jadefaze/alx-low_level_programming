#include "main.h"
#include <unistd.h>
#include <stddef.h>

/**
 * read_textfile - to read text from file and print to stdout (POSIX)
 * @filename: the textfile name
 * @letters: number of letters to be read and printed
 * Return: actual number of elements read and printed else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fp;
	ssize_t bytesRead;
	ssize_t dataWrite;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (!fp)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	bytesRead = read(fp, buf, letters);
	if (!bytesRead)
		return (0);
	dataWrite = write(STDOUT_FILENO, buf, bytesRead);

	if (!dataWrite)
		return (0);
	free(buf);
	close(fp);

	return (dataWrite);
}