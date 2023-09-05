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
	int **a = malloc(width * sizeof(int *));

	if (width <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		a[i] = malloc(height * sizeof(int));
		for (j = 0; j < height; j++)
		{
			if (height <= 0)
			{
				for (j = 0; j < i; j++)
				{
					free(a[j]);
				}
				free(a);
				return (NULL);
			}
			a[i][j] = 0;
		}
	}
	return (a);
}
