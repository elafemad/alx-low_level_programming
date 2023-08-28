#include "main.h"
/**
 * *_memcpy- function that fills memory with a constant byte.
 * Description: fill memory
 * @dest:destination pointer
 * @src:source pointer
 * @n:integer.
 * Return: pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
