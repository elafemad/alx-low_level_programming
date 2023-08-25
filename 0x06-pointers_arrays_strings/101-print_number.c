#include "main.h"
/**
 * print_number - print an integer
 * @n: input value
 */

void print_number(int n)
{

	unsigned int i;

	i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i / 10 != 0)
		print_number(i / 10);
	_putchar((i % 10) + 48);
}
