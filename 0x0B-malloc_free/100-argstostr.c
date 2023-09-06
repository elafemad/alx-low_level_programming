#include "main.h"
/**
 * *argstostr - creates an array of chars.
 * @ac:intger
 * @av: pointer
 * Return: null, pointer.
 */
char *argstostr(int ac, char **av)
{
	int i, j, z, size;
	char *a;

	z = 0;
	size = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	a = malloc((sizeof(char) * size) + 1);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			a[z] = av[i][j];
			z++;
			j++;
		}
		a[z] = '\n';
		i++;
		z++;
	}
	a[z] = '\0';
	return (a);
}
