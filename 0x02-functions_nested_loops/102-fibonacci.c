#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;
	unsigned long fb1 = 0, fb2 = 1, s;

	for (c = 0; c < 50; c++)
	{
		s = fb1 + fb2;
		printf("%lu", s);

		fb1 = fb2;
		fb2 = s;
		if (c == 49)
			printf("\n");
		else
			printf(", ");

	}
	return (0);
}
