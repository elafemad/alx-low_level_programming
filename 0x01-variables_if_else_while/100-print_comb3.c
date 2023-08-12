#include <stdio.h>
/**
 * main - Entry point.
 * Description:program that prints combination.
 * Return: Always 0 (success).
 */
int main(void)
{
	int z = 48;
	int u = 48;

	while (z < 58)
	{
		u = 48;
		while (u < 58)
		{
			if (z != u && z < u)
			{
				putchar(z);
				putchar(u);
				if (z == 57 && u == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		   u++;
		}
	    z++;
	}
	putchar('\n');
	return (0);
}
