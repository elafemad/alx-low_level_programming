#include "variadic_functions.h"
/**
 * sum_them_all -  function that returns the sum of all its parameters
 * @n:number of parmeters
 * Return: sum of parmeters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	unsigned int add = 0;
	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
	{
		return (0);
	}

	for (index = 0 ; index < n ; index++)
	{
		add += va_arg(ptr, unsigned int);
	}
	va_end(ptr);
	return (add);
}
