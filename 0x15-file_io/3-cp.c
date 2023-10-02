#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * test - function to validate arguments.
 * @ac: number of arguments.
 * @av: arguments.
 * Return: 0 on success, 1 on failure.
 */
int test(int ac, char **av)
{
    if (ac != 3)
    {
        dprintf(STDOUT_FILENO, "Usage: %s file_from file_to\n", av[0]);
        return 1;
    }
    
    if (av[1] == NULL)
    {
        dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", av[1]);
        return 1;
    }
    
    return 0;
}

/**
 * main - function that copies a file.
 * @ac: number of arguments.
 * @av: arguments.
 * Return: 0 on success, 1 on failure.
 */
int main(int ac, char **av)
{
    int f1, f2, r1, w2;
    char b[1024];
    
    if (test(ac, av) != 0)
    {
        exit(97);
    }

    f1 = open(av[1], O_RDONLY);
    if (f1 == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", av[1]);
        exit(98);
    }

    r1 = read(f1, b, sizeof(b));
    if (r1 == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", av[1]);
        close(f1);
        exit(98);
    }

    f2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (f2 == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't write to file %s\n", av[2]);
        close(f1);
        exit(99);
    }

    w2 = write(f2, b, r1);
    if (w2 == -1)
    {
        dprintf(STDOUT_FILENO, "Error: Can't write to file %s\n", av[2]);
        close(f1);
        close(f2);
        exit(99);
    }

    if (close(f1) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
        perror("close");
        exit(100);
    }
    
    if (close(f2) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
        perror("close");
        exit(100);
    }

    return 0;
}
