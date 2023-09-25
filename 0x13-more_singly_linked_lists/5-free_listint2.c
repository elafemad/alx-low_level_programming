#include "lists.h"
/**
 * free_listinit2 -function that frees a listint_t list.
 * @head: pointer.
 * Return: return nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	while (*head != NULL)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
}
