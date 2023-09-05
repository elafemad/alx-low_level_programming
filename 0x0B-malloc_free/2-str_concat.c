#include "main.h"
/**
 * *str_concat - function that concatenates two strings.
 * @s1:pointer
 * @s2: pointer
 * Return: null, pointer.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = malloc(strlen(s1) + strlen(s2) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		a[i + j] = s2[j];
	}
	a[i + j] = '\0';
	return (a);
}
