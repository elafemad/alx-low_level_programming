#include "main.h"
#include <math.h>
/**
 * print_diagsums- function print sum of diagonals of a square.
 * Description: diagonals od square.
 * @a:pointer of array
 * @size: input
 * Return: void no return,
 */
void print_diagsums(int *a, int size)
{

	int i, sum1 = 0, sum2 = 0;

	for (i =  0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
