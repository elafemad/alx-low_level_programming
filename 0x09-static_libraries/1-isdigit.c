#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: is a num.
 * Return: empty.
 */
int _isdigit(int c)
{
	if (c < 58 && c > 47)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
