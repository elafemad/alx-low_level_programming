#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end.
 * @head: pointer to pointer.
 * @str: pointer to char.
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *temp;

	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);
	p->str = strdup(str);
	p->len = strlen(str);
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = p;
	}
	return (p);
}
