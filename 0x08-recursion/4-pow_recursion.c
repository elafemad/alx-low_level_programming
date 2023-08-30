#include "main.h"
/**
 * _pow_recursion - a function return the value of x raised to the power of y
 * Description:x powerd to y.
 * @x:an integer.
 * @y:an integer.
 * Return:number.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
