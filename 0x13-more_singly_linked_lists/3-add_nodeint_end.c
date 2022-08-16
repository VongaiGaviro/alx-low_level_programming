#include "lists.h"

/**
 * add_nodeint_end - add node to the end of the list
 * @head: pointer to the reference head
 * @n: integer to be added
 *
 * Return: tpointer to the newly added node if successful, NULL otherwise
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = newNode;
	return (newNode);
}
