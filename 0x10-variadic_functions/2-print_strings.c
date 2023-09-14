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

	va_start(args, const);

	if (n == 0)
	{
		return (0);
	}

	if ( == NULL)
	{
		printf("nil");
	}
	int num = va_args(args, int)
		printf("%d\n", num);

	printf("\n");

	va_end(args);
}
