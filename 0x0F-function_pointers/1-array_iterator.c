#include "function_pointers.h"
/**
 * array_iterator - function that execute a fun as a parameter on
 * @array: input
 * @size: size of array
 * @action:a pointer to function
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
