#include "main.h"
/**
 * print_rev - function print string in reverse.
 * Description: function print string.
 * @s: useless char.
 * Return: void.
 */
void print_rev(char *s)
{
	int i;
	int k;

	for (i = 0; s[i] != '\0'; ++i)
	;
	for (k = i - 1; k >= 0; --k)
		_putchar(s[k]);
	putchar('\n');
}
