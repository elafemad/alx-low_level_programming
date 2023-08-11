#include<stdio.h>
/**
 * main - Entry point
 * Description: This code is to ptints all the numbers of base 16.
 * Return: Alwayes 0 (Success).
 */
int main(void)
{
	int lolla = 48;
	int elaf = 97;

	while (lolla <= 57)
	{
		putchar(lolla);
		lolla++;
	}
	while (elaf < 103)
	{
		putchar(elaf);
		elaf++;
	}
	putchar('\n');
	return (0);
}
