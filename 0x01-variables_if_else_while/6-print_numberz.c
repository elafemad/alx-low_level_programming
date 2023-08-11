#include<stdio.h>
/**
 * main -Entry point
 * Description: This code prints all single digit with putchar.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int lolla = '0';

	while (lolla <= '9')
	{
		putchar(lolla);
		lolla++;
	}
	putchar('\n');
return (0);
}
