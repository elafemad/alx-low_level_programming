#include "main.h"

/**
 * _islower - Entry point.
 * Description:a function that checks for lowercase character.
 * @c: is integer input
 * Return: Always i is lower, 0 otherwise.
 */
int _islower(int c)
{

	if (c < 122 && c > 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
