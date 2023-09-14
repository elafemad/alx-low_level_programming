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
	char str;

	va_start(args, const);

	if (n == 0)
	{
		return (0);
	}

	if ( == NULL)
	{
		printf("nil");
	}
	for (i = 0; i < n; i++)
	{
		str = va_args(args, char)
			printf("%s\n", str);
		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
