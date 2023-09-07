#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: the min range
 * @max: the max range
 * Return: the pointer to new array
 */
int *array_range(int min, int max)
{
	int x, size;
	int *pntr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pntr = malloc(sizeof(int) * size);

	if (pntr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		pntr[x] = min++;

	return (pntr);
}
