#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning.
 * @head: pointer to pointer.
 * @str: pointer to char.
 * Return: the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *p;

	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);
	p->str = strdup(str);
	p->len = strlen(str);
	p->next = NULL;
	p->next = *head;
	*head = p;
	if (p == NULL)
		return (NULL);
	return (p);
}
