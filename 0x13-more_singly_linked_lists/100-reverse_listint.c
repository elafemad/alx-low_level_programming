#include "lists.h"
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: pointer to pointer.
 * Return: intger.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = *head, *prev = NULL, *next;

	while (p)
	{
		next = p->next;
		p->next = prev;
		prev = p;
		p = next;
	}
	*head = prev;
	return (*head);
}
