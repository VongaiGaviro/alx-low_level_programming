#include "lists.h"

/**
 * listint_len - count the number of elements in listint_t
 * @h: pointer to the head of the list
 *
 * Return: the number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
