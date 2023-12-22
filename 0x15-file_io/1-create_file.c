#include "main.h"
#include <unistd.h>

/**
 * create_file - to a create a file (on disk)
 * @filename: name of file
 * @text_content: content to add to file
 * Return: 1 on success, otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, _txtLen;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC);

	if (fd == -1)
		return (0);

	/*find length of the text to be written*/
	_txtLen = 0;
	while (*(text_content + _txtLen) != '\0')
		_txtLen++;

	if (text_content == NULL)
	{
		bytesWritten = write(fd, "", _txtLen);
		if (bytesWritten == -1)
		{
			close(fd);
			return (0);
		}
	}

	bytesWritten = write(fd, text_content, _txtLen);

	if (bytesWritten == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);

	return (bytesWritten);
}
