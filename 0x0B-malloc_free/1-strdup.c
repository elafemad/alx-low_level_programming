#include "main.h"
/** 
 * *_strdup - a function that returns a pointer to a newly allocated space in memory,
 * @str: pointer
 * Return: null, pointer.
 * */
char *_strdup(char *str)
{
	int i;
	char *a;

	for (i = 0; str[i] != '\0'; i++)
	{}
	a = malloc(i *  sizeof(char));
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
