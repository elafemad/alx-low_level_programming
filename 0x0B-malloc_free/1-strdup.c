#include "main.h"
/**
 * *_strdup - a function that returns a pointer to a newly allocated  memory
 * @str: pointer
 * Return: null, pointer.
 */
char *_strdup(char *str)
{
	int i;
	char *a;

	if (str == NULL)
        {
                return (NULL);
        }
	for (i = 0; str[i] != '\0'; i++)
	{}	
	a = malloc((i + 1) *  sizeof(char));
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
