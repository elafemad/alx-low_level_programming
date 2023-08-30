#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * Description: print a string.
 * @s:pointer.
 * Return: none.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
