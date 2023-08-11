#include<stdio.h>
/**
* main - Entry point
*
* Description: 'the program print alphapet in lowercase'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char h = 'a';

	while (h <= 'z')
	{
		if (h != 'q' && h != 'e')
			putchar(h);
		h++;
	}
	putchar('\n');

	return (0);
}
