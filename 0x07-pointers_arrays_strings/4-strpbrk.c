#include "main.h"
/**
 * _strpbrk- function that search a string for any set of bytes
 * @s:string to be searched
 * @accept:string contain char to match
 * Return: num.
 */
char *_strpbrk(char *s, char *accept)
{
	int j, k;
	char *p;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (accept[k] == s[j])
			{
				p = &s[j];
				return (p);
			}
		}
	}
	return (0);
}
