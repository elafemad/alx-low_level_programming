#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point.
 * Description: function that prints all natural numbers from n to 98.
 * @n: an integer input.
 * Return: void.
 */
void print_to_98(int n)
{
	int k;

	if (n <= 98)
	{
		for (k = n; k <= 98; k++)
		{
			if (k == 98)
			{
				printf("%d", k);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", k);
			}
		}
	}
	else
	{
		for (k = n; k >= 98; k--)
		{
			if (k == 98)
			{
				printf("%d", k);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", k);
			}
		}
	}
}
