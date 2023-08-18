#include<stdio.h>
/**
 * main - print largest prime.
 *
 * Return: 0 .
 */
int main(void)
{
	long prime, n;

	prime = 612852475143;
	for (n = 2; n <= prime; n++)
	{
		if (prime % n == 0)
		{
			prime /= n;
			n--;
		}
	}
	printf("%ld\n", n);
	return (0);
}

