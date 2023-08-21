#include "main.h"
/**
 * _puts - function print string.
 * Description: function print string.
 * @str: useless char.
 * Return: void.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
