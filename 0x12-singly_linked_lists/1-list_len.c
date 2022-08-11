#include "lists.h"

/**
 * list_len - print all element of a linked list
 * @h: head of the linked list
 *
 * Return: number of element in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
