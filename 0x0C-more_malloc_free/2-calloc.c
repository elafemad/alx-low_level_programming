#include "main.h"
/**
 * *_calloc - function that allocates memory for an array.
 * @nmemb: unsigned integer.
 * @size: unsigned integer
 * Return: null, pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
	{
		a[i] = 0;
	}
	return (a);
}
