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

	va_start(args, n);

	if (separtor == NULL)
	{
		return;
	}
	void num = va_args(args, void)
		printf("%d\n", num);

	printf("\n");
	va_end(args);
}
