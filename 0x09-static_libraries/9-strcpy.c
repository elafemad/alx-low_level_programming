#include"main.h"

/**
 * *_strcpy - function for copying.
 *
 * @dest: this is first input .
 * @src: this is seconde input.
 *
 * Return: will be void.
 */

char *_strcpy(char *dest, char *src)
{
	int lolla;
	int elaf;

	for (lolla = 0; src[lolla] != '\0'; lolla++)
		;
	for (elaf = 0; elaf < lolla; elaf++)
	{
		dest[elaf] = src[elaf];
	}
	dest[elaf] = '\0';
	return (dest);
}
