#include "main.h"

/**
 * print_sign - check the code.
 * Discription:a function that prints the sign of a number.
 * Return: 0 if 0, 1 if + and -1 if -.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('0');
		return (-1);
	}
}
