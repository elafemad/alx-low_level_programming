#include "main.h"
/**
 * **alloc_grid - creates an array of chars.
 * @width:intger
 * @height:intger
 * Return: null, pointer.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a = malloc(height * sizeof(int *));

	if (width <= 0 || height == 0 || a == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == 0)
		{
			while (i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
