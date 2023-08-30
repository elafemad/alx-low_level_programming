#include "main.h"
/**
 * factorial -  a function return factorial of a given number.
 * Description: factorial for number.
 * @n:an integer
 * Return: number.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
