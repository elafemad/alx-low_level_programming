#include "main.h"
/**
 * _isalpha - Entry point.
 * Description:a function that checks for lowercase character.
 * @c: is integer input
 * Return: Always i is lower or upper, 0 otherwise.
 */
int _isalpha(int c)
{

	if (c > 97 && c < 123)
	{
		return (1);
	}
	else if (c > 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
