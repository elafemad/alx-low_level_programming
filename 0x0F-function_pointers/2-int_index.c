#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: pointer to array
 * @size: size of array
 * @cmp:a pointer to function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
