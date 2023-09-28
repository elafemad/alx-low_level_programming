#include "main.h"
/**
 * set_bet - func sets value of a bit to 1 at given index.
 * @n: pointer.
 * @index: index
 * Return:1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;
	if(n == 0 && index == 0)
	{
		return (-1);
	}
	i = i << index;
	*n |
	return (1);

}
