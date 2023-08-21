#include"main.h"

/**
 * print_array - function array.
 *
 * @a: input pointer.
 * @n: input integer.
 *
 * Return: will be void.
 */

void print_array(int *a, int n)
{
	int lofa;

	for (lofa = 0; lofa < n; lofa++)
	{
		if (lofa != (n - 1))
		{
			printf("%d, ", a[lofa]);
		}
		else
		{
			printf("%d", a[lofa]);
		}
	}
	printf("\n");
}
