#include "main.h"

/**
 * print_numbers - a function that print numbers.
 *
 * Return: empty.
 */
void print_numbers(void)
{
	int h;

	h = 48;
	while (h < 58)
	{
		_putchar(h);
		h++;
	}
	_putchar('\n');
}
