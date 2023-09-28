#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: pointer
 * @index: index
 * Return: 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	i = ~(i << index);
	*n = *n & i;

	return (1);
}
