#include<stdio.h>
/**
 * main -Entry point
 * Description: This code is to prints all/
 * / possible combinations of single-digit numbers.
 * Return: Alwayes 0 (Success).
 */
int main(void)
{
	int lolla = 48;

	while (lolla < 58)
	{
		putchar(lolla);
		if (lolla == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		lolla++;
	}
	putchar('\n');
	return (0);
}
