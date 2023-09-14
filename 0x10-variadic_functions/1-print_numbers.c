#include "variadic_functions.h"
/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @separator: astring to be printed between num.
 * @n: number of integers passed to function
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, unsigned int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}
	va_end(args);
	printf("\n");
}
