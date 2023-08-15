#include "main.h"
/**
 * _isalpha - Entry point.
 * Description:a function that checks for lowercase character.
 * @c: is integer input
 * Return: Always i is lower, 0 otherwise.
 */
int _isalpha(int c)
{
	int c = 97;
	int r = 65;

	if (c < 122 || r < 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
