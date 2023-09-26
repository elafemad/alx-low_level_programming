#include "lists.h"
/**
 * insert_nodeint_at_index - fun that inserts a new node at a given position
 * @head: pointer to pointer.
 * @idx: index.
 * @n: integer
 * Return: intger.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp, *current;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		current = malloc(sizeof(listint_t));
		if (current == NULL)
			return (NULL);


		current->n = n;
		current->next = *head;
		*head = current;
		return (current);
	}
	temp = *head;
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			current = malloc(sizeof(listint_t));
			if (current == NULL)
				return (NULL);


			current->n = n;
			current->next = temp->next;
			temp->next = current;
			return (current);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
