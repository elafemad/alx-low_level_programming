#include "main.h"
/**
 * *_strncpy- function that copy a string.
 * Description: function copy a string.
 * @dest: destination string.
 * @src:source string.
 * @n: an integer
 * Return: pointer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
