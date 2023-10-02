#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success -1 in failaure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fr;


	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	}
	if (text_content != NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		fr = write(fd, text_content, strlen(text_content));
	}
	if (fd == -1 || fr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
