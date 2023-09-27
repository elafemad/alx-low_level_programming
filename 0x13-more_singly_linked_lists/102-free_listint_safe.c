#include "lists.h"
/**
 * free_listint_safe- find loop in a linked list
 * @h: pointer to head
 * Return:address
 */
size_t free_listint_safe(listint_t **h)
{
	const listint_t *corrent = NULL;
	size_t len = 0;

	/*check head */
	if (!h || !*h)
		return (0);

	corrent = head;
	while (corrent)
	{
		corrent = corrent->next;
		free(*h);
		*h = corrent;
		len++;
	}
	return (len);
}
