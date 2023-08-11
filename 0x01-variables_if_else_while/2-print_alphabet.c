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
	putchar('\n');
	return (0);
}

