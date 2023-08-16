#include<stdio.h>
/**
 * main - Entry point.
 * Description: This code for Elaf.
 * Return: Alwayes 0 (Success).
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if (i >= j)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
