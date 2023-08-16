#include "main.h"
/**
 * print_times_table - print n times table
 *
 * @n: takes number input
 */

void print_times_table(int n)
{
	int a, b, x;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');

				x = a * b;
				if (x <= 9)
					_putchar(' ');
				if (x <= 99)
					_putchar(' ');
				if (x >= 100)
				{
					_putchar((x / 100) + 48);
					_putchar((x / 10) % 10 + 48);
				}
				else if (x <= 99 && x >= 10)
				{
					_putchar((x / 10) + 48);
				}
				_putchar((x % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
