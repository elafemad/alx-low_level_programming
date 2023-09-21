#include "lists.h"
/**
 * list_len - function that prints all the elements of a list_t list.
 * @h: pointer to list_t.
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
