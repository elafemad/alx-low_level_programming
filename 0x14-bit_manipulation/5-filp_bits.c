#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: intger
 * @m: intger
 * Return: counter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif;
	unsigned int counter = 0;

	dif = n ^ m;
	while (dif)
	{
		counter++;
		dif &= (dif - 1);
	}
	return (counter);
}
