#include "lists.h"

/**
 * print_listint_safe - prints linked list
 * @head: head pointer
 * Return: # of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *corrent = NULL;
	const listint_t *check = NULL;
	size_t counter = 0;
	size_t counter_check;

	/*check head*/

	corrent = head;
	while (corrent)
	{
		if (!head)
			exit(98);
		printf("[%p] %d\n", (void *)corrent, corrent->n);
		counter++;
		corrent = corrent->next;
		check = head;
		counter_check = 0;
		while (counter_check < counter)
		{
			if (check == corrent)
			{
				printf("-> [%p] %d\n", (void *)corrent, corrent->n);
				return (counter);
			}
			check = check->next;
			counter_check++;
		}
	}
	return (counter);
}
