#include "lists.h"
/**
 * pop_listint - function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to pointer.
 * Return: the address of the new element.
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *del;

	if (*head == NULL)
		return (0);

	del = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = del;
	return (i);
}
