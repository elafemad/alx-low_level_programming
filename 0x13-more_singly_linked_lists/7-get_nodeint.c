#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t.
 * @head: pointer to pointer.
 * @index: index of the node
 * Return: 9th node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}

	return (current);
}
