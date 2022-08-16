#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: pointer to head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
