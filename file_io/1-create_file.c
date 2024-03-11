#include "main.h"
/**
 * create_file - creates file
 * @filename: name of file to create
 * @text_content: NULL terminated string to be written
 * Return: 1 for success, -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	count = strlen(text_content);
	w = write(fd, text_content, count);
	if (w == -1)
	{
		close(w);
		return (-1);
	}
	return (1);
}
