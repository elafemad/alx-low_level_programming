#include "main.h"
/**
 * read_textfile -  func reads a text file and prints it to the POSIX output
 * @filename: name of file to create
 * @letters: size of bytes
 * Return: counter
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, counter, r;
	char *c;

	c = malloc(sizeof(char) * letters);
	if (c == NULL)
	{
		return (0);
	}
	if (!letters)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	fd  = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	r = read(fd, c, letters);
	if (r == -1)
	{
		free(c);
		return (0);
	}
	counter = write(STDOUT_FILENO, c, r);
	free(c);
	close(fd);
	return (counter);
}
