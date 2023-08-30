#include "main.h"
/**
 * squar - natural square
 * @n: input value
 * @x: input value
 * Return: the natual square
 */
int squar(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (squar(n, x + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - natural square
 * @n: input value
 * Return: the natual square
 */
int _sqrt_recursion(int n)
{
	return (squar(n, 1));
}
