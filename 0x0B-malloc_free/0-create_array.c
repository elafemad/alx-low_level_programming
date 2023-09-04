#include "main.h"
/**
 * *create_array - creates an array of chars.
 * @size:intger
 * @c: char
 * Return: null, pointer.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a =  malloc(size * sizeof(char));

	if (size == 0 || a == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
