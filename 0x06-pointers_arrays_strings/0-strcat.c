#include "main.h"
/**
 * *_strcat- function that cat towo strings.
 * Description: function print string.
 * @dest: destination string.
 * @src:source string.
 * Return: pointer.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + 1] = src[j];
	}
	return (dest);
}
