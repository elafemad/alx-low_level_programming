#include "main.h"
/**
 * print_last_digit - print lD
 * @n: intrger
 * Return: value of last digit.
 */
int print_last_digit(int n)
{
	int e = n % 10;

	if (e < 0)
	{
	_putchar('0' + -e);
	return (-e);
	}
	else
	{
		_putchar(e + 48);
		return (e);
	}
}
