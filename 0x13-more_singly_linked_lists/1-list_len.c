#include "lists.h"
/**
 * listint_len - a fun that returns the num of elements in a linked listint_t.
 * @h: pointer to list_t.
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
