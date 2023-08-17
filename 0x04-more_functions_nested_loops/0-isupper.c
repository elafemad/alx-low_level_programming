#include "main.h"

/**
 * _isupper -  function that checks for uppercase character.
 * Return: 1 if upper 0 otherwis.
 * @c: is a char.
 */
int _isupper(int c)
{

	if (c < 91 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
