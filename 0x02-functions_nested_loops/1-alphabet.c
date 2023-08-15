#include "main.h"
/**
 * print_alphabet - Entry point.
 * Description: a function that prints the alphabet, in lowercase.
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char h = 'a';

	while (h <= 'z')
	{
		_putchar(h);
		h++;
	}
	_putchar('\n');
}
