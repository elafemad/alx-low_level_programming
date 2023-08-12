#include <stdio.h>
/**
 * main - prints all possible combinations of 2 num
 * Return: 0 always
 */
int main(void)
{
	int k, j;

	for (k = 0; k < 100; k++)
	{
		for (j = 0; j < 100; j++)
		{
			if (k < j)
			{
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (k != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
