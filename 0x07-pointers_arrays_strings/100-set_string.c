
#include "main.h"
#include <math.h>
/**
 * print_diagsums- function print sum of diagonals of a square.
 * Description: diagonals od square.
 * *s:pointer of array
 * to: input
 * Return: void no return,
 */
void set_string(char **s, char *to)
{

	int i, sum1, sum2;

	for (i =  0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}
}
