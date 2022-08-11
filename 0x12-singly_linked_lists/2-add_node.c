#include "lists.h"

/**
 * add_node - add a node the beginning of a linked list
 * @head: pointer reference to the head of the linked list
 * @str: pointer to the str to be added to the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
