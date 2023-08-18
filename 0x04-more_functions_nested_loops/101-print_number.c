#include "main.h"
/*
 * print_number - a function that prints an integer.
 * Discription : find intger
 * @n: an integer.
 * Return : 0 .
 */
void print_number(int n)
{
	unsigned int h = n;

	if (n < 0)
	{
		_putchar('-');
		h = -h;
	}
	if ((h / 10) > 0)
		print_number(h / 10);

	_putchar((h % 10) + '0');
}
