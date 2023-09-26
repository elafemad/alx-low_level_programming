#include "lists.h"
/**
 * delete_nodeint_at_index -  function that deletes the node at index
 * @head: pointer to pointer.
 * @index: index.
 * Return: intger.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *del;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		del = temp;
		temp = temp->next;
		*head = temp;
		free(del);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}
	del = temp->next;
	temp->next = temp->next->next;
	free(del);
	return (1);
}
