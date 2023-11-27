#include "main.h"
/**
 * append_text_to_file - a function that append a text at the end of file.
 * @filename: name of file
 * @text_content: string to add it to file
 * Return: 1 on success -1 in failaure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fr;


	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		return (1);
	}
	if (text_content != NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_APPEND);
		fr = write(fd, text_content, strlen(text_content));
	}
	if (fd == -1 || fr == -1)
	{
		return (-1);
	}
	close(*filename);
	return (1);
}
