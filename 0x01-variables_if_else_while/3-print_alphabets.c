#include <stdio.h>
/**
* main - Entry point
*
* Description: use putchar to print  letters
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char elaf = 97;

	while (elaf < '{')
	{
		putchar(elaf);
		elaf++;
	}
	do {
		putchar('\n');
	}
	while (elaf < '90')
	{
		putchar(elaf);
		elaf++;
	}
	return (0);
}
