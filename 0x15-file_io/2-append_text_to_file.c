#include "main.h"
#include <sys/stat.h>

/**
 * append_text_to_file - to append text at the end of a file
 * @filename: the name of the file
 * @text_content: the text to add
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, text_len;
	ssize_t bytesWritten;

	/* structure to store file information */
	struct stat fileStat;

	/*checking filename exists*/
	if (filename == NULL)
		return (-1);

	/*check for permissions on file*/
	if (!(stat(filename, &fileStat) == 0))
	{
		if (fileStat.st_mode & S_IWUSR)
			return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	/*finding text len*/
	text_len = 0;

	while (*(text_content + text_len) != '\0')
		text_len++;

	bytesWritten = write(fd, text_content, text_len);

	if (bytesWritten == -1)
	{
		close(fd);
		return (-1);
	}

	/* close the file*/
	close(fd);

	return (1);
}
