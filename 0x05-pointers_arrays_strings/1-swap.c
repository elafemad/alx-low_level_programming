#include "main.h"
/**
 * swap_int - function swaps the value of 2 int.
 * @a: useless integer.
 * @b: usless integer.
 */
void swap_int(int *a, int *b)
{
	int h;

	h = *a;
	*a = *b;
	*b = h;
}
