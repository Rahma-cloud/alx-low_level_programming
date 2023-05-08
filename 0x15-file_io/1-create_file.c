#include "main.h"

/**
 * create_file - a function
 * @filename: parameter
 * @text_content: parameter
 * Return: 0
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bw = -1;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	bw = write(fd, text_content, len);
	if (fd == -1 || bw == -1)
		return (-1);
	close(fd);
	return (1);
}
