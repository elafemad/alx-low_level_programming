#include "main.h"
/**
 * *_realloc - reallocates a memory block
 * @pntr: the pointer to the memory previsouly allocated
 * @old_size: the size of the allocated
 * @new_size: the new size of the new memory
 * Return: the pointer to the newly allocated memory
 */
void *_realloc(void *pntr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *old_pntr;
	char *pntr1;

	if (new_size == old_size)
		return (pntr);

	if (new_size == 0 && pntr)
	{
		free(pntr);
		return (NULL);
	}

	if (!pntr)
		return (malloc(new_size));

	pntr1 = malloc(new_size);
	if (!pntr1)
		return (NULL);

	old_pntr = pntr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			pntr1[x] = old_pntr[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			pntr1[x] = old_pntr[x];
	}

	free(pntr);
	return (pntr1);
}
