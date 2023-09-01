#include "main.h"
/**
 * *_strchr- function that locates a char in string.
 * @s:pointer
 * @c:a char.
 * Return: pointer.
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return (NULL);

}
