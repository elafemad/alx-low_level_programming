#include "lists.h"
/**
 * *add_nodeint - function that adds a new node at the beginning.
 * @head: pointer to pointer.
 * @n: intger to new node.
 * Return: the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
