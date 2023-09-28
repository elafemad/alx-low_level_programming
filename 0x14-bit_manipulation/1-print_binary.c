#include "main.h"
/**
 * print_binary - func print binary representation of number
 * @n: integer
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');

}
