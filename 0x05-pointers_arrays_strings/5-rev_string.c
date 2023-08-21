#include"main.h"

/**
 * rev_string - function reverse.
 *
 * @s: input string.
 *
 * Return: will be a void.
 */
void rev_string(char *s)
{
	int k, l, m;

	for (k = 0; s[k] != '\0'; k++)
		;
	for (l = 0; l < k / 2; l++)
	{
		m = s[l];
		s[l] = s[k - 1 - l];
		s[k - 1 - l] = m;
	}
}
