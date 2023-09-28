#include "main.h"
/**
 * print_binary - func print binary representation of number
 * @n: integer
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	unsigned int i;

	{
		if ( n == 0)
		{
			_putchar('0');
		}

	}
	n >>= 1;
	_putchar(i ? '1' : '0');

}
