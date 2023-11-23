#include "main.h"
/**
 * get_bit - func return value of bit in a given index.
 * @n: an intger
 * @index: index
 * Return: index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
