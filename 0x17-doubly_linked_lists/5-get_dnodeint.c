#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to retrieve, starting from 0.
 * Return: If the node exists, returns a pointer to the nth node.
 *	If the node does not exist, returns NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
	if (count == index)
	return (current);

	current = current->next;
	count++;
	}

	return (NULL);
}

