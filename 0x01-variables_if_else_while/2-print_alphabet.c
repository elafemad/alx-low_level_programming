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
	char e = 97;

	while (e < '{')
	{
	putchar(e);
	e++;
	}
	putchar('\n');
	return (0);
}

