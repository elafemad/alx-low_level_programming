#include<stdio.h>
/**
 * main - Entry point
 * Description: This code i prints the lower case in reverse.
 * Return: Alwayes 0 (Success)
 */
int main(void)
{
	char lolla = 122;

	while (lolla > 96)
	{
		putchar(lolla);
		lolla--;
	}
	putchar('\n');
	return (0);
}
