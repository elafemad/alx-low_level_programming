#include "main.h"
/**
 * *_strncat- function that cat two strings.
 * Description: function cat 2  string.
 * @dest: destination string.
 * @src:source string.
 * @n: an integer
 * Return: pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
