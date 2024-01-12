#include "lists.h"
/**
 * free_dlistint - sfyhnyfrh
 * @head: ffffffffffff
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
