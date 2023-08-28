#include "main.h"
/**
 * _strspn- function that fills memory with a constant b
 * @s:string to be searched
 * @accept:string contain char to match
 * Return: num.
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, k;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				break;
			}
		}
	}
	if (accept[k] == s[j])
	{
		return (j);
	}
	return (j);
}
