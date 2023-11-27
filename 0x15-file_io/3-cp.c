#include "main.h"

#define BUFFER_SIZE 1024

int test(int ac, char **av);
int copyFile(const char *source, const char *destination);


/**
 * test - function that test
 * @ac: number of arguments.
 * @av: arguments.
 * Return: 0 on success, 1 on failure.
 */

int test(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: %s file_from file_to\n", av[0]);
		return (1);
	}

	if (av[1] == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", av[1]);
		return (1);
	}

	return (0);
}

/**
 * copyFile - function that copies a file.
 * @source: copy from
 * @destination: copy to
 * Return: 0 on success.
 */

int copyFile(const char *source, const char *destination)
{
	int f1, f2, r1, w2;
	char buffer[BUFFER_SIZE];

	f1 = open(source, O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", source);
		return (1);
	}

	r1 = read(f1, buffer, sizeof(buffer));
	if (r1 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", source);
		close(f1);
		return (1);
	}

	f2 = open(destination, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f2 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to file %s\n", destination);
		close(f1);
		return (1);
	}

	w2 = write(f2, buffer, r1);
	if (w2 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to file %s\n", destination);
		close(f1);
		close(f2);
		return (1);
	}

	if (close(f1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		perror("close");
		return (1);
	}

	return (0);
}


/**
 * main - function that copies a file.
 * @ac: number of arguments.
 * @av: arguments.
 * Return: 0 on success, 1 on failure.
 */
int main(int ac, char **av)
{
	if (test(ac, av) != 0)
	{
		exit(1);
	}

	if (copyFile(av[1], av[2]) != 0)
	{
		exit(1);
	}

	return (0);
}
