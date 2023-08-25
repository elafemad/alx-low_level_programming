#include "main.h"
/**
 * _strcmp- compare 2 strings.
 * Description: function compare astring.
 * @s1:1 string.
 * @s2: 2 integer
 * Return: 0 if same, '-' if less and '+' if greater..
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	for (i = 0; s1[i] != '\0'; i++)
	{

	}
	for (j = 0; s2[j] != '\0' && j != i; j++)
	{
	}
	if (s1[i] == s2[j])
		return (0);

	else if (s1[i] > s2[j])
		return (i);

	else
		return (-i);
}
