#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long fb1 = 0, fb2 = 1, s;
	float tot;

	while (1)
	{
		s = fb1 + fb2;
		if (s > 4000000)
			break;
		if ((s % 2) == 0)
			tot += s;
		fb1 = fb2;
		fb2 = s;
	}
	printf("%.0f\n", tot);

	return (0);
}
