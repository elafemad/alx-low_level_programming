#include <stdio.h>
/**
 * main - Entry point
 * Description:program that prints of 3 num
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 48;
	int b = 48;
	int c = 48;

	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			c = 48;
			while (c < 58)
			{
				if (a != b && a != c && b != c && a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == 55 && b == 56 && c == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
