#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * main - function that copy.
 * @ac: num of argument.
 * @av: arguments.
 * Return: 1 on success.
 */
int main(int ac, char **av)
{
	int f1, f2, r1, w2;
	char b[1024];

	if (ac > 3 && ac < 2)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (av[1] == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	else
	{
		f1 = open(av[1], O_RDWR);
		r1 = read(f1, b, 1024);
		if (r1 == -1)
		{
			dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
	}
	f2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f2 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", av[2]);
		exit(99);
	}
	w2 = write(f2, b, strlen(b));
	if (w2 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", av[2]);
		exit(99);
	}
	close(f1);
	close(f2);
	return (1);
}
