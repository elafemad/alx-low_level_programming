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
	char elaf1 = 65;

	while (elaf < '{')
	{
		putchar(elaf);
		elaf++;
	}
	do {
		putchar(elaf1);
		elaf1++;
	} while (elaf1 < 91);
	putchar('\n');
	return (0);
}
