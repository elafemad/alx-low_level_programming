#include "main.h"
/**
 * *string_nconcat -  function that concatenates two strings.
 * @s1: pointer to char input.
 * @s2: pointer to char input.
 * @n: unsigned integer input.
 * Return: pointer to char.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	a = malloc(strlen(s1) + n + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		a[i + j] = s2[j];
	}
	a[i + j] = '\0';
	return (a);
}
