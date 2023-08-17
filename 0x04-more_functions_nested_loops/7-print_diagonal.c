#include "main.h"
/**
 * print_diagonal - Entry point.
 * @n: integer input.
 * Description: function that draws a diagonal line on the terminal.
 * Return: void.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (j = 0; j < n; j++)
	{
		for (i = 0; i <= (j - 1); i++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	}
}
