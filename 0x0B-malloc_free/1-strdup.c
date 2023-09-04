#include "main.h"
/**
 * *_strdup - a function that returns a pointer to a newly allocated  memory
 * @str: pointer
 * Return: null, pointer.
 */
char *_strdup(char *str)
{
	int i = 0;
	char *a;

	a = malloc(i + 1 *  sizeof(char));
	if (str == NULL || a == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
