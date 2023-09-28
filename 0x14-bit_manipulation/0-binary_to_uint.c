#include "main.h"
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, x = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		x <<= 1;
		if (b[i] == '1')
			x += 1;
	}

	return (x);
}
