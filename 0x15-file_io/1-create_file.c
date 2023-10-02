#include "main.h"
/**
 * create_file -  a function that creates a file.
 *@filename: pointer.
 @text_content : pointer to array
 *Return 1 on success -1 in failaure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;


	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	}
	if (text_content != NULL)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		write(fd, text_content, strlen(text_content));
		close(fd);
	}
	return (1);
}
