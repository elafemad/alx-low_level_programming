#include "variadic_functions.h"
/**
 * print_strings -  function that print string, followed by a new line.
 * @separator: astring to be printed between stringd
 * @n: number of integers passed to function
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("nil");
		}
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
