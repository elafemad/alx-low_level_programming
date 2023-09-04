#include "main.h"
#include<string.h>
/**
 * *_strdup - a function that returns a pointer to a newly allocated  memory
 * @str: pointer
 * Return: null, pointer.
 */
char *_strdup(char *str)
{
	int i;
	char *a = malloc((strlen(str) *  sizeof(char)) + 1);

	if (str == NULL || a == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		a[i] = str[i];
	}
	if (a == NULL)
	{
		return (NULL);
	}
	else
		return (a);
}
