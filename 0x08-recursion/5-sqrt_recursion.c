#include "main.h"
/**
 * _sqrt_recursion - a function that returns the sqrt
 * squar - natural square
 * Description: sqrt
 * @n:an integer
 * @x: input value
 * Return: number
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
int _sqrt_recursion(int n)
{
	return (squar(n, 1));
}
