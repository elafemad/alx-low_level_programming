#include "main.h"
/**
 * *_memset- function that fills memory with a constant byte.
 * @s:pointer
 * @b:const byte
 * @n:an integer
 * Return: pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	for (i = 0; i < n; i++; n--)
	{
		s[n] = b;
	}
	return (s);
}
