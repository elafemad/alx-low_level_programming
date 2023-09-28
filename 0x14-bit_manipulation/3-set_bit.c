#include "main.h"
/**
 * set_bit - func sets value of a bit to 1 at given index.
 * @n: pointer.
 * @index: index
 * Return:1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);

}
