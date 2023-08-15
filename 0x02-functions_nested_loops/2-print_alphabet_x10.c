#include "main.h"
/**
 * print_alphabet_x10- Entry point.
 * Desciption: function that prints 10 times the alphabet, in lowercase.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char h = 'a';

		while (h <= 'z')
		{
			_putchar(h);
			h++;
		}
		_putchar('\n');
	}
}
