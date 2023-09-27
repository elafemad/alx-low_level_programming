#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sl = head;
	listint_t *fa = head;

	if (!head)
		return (NULL);

	while (sl && fa && fa->next)
	{
		fa = fa->next->next;
		sl = sl->next;
		if (fa == sl)
		{
			sl = head;
			while (sl != fa)
			{
				sl = sl->next;
				fa = fa->next;
			}
			return (fa);
		}
	}

	return (NULL);
}
