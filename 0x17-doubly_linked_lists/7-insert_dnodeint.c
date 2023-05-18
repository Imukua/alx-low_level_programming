#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a doubly linked list.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: Index where the new node should be inserted. Index starts at 0.
 * @n: Data for the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
	return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
	if (*h != NULL)
	(*h)->prev = new_node;
	new_node->next = *h;
	*h = new_node;
	return (new_node);
	}

	current = *h;
	for (i = 0; i < idx - 1; i++)
	{
	if (current == NULL)
	{
	free(new_node);
	return (NULL);
	}
	current = current->next;
	}

	if (current == NULL)
	{
	free(new_node);
	return (NULL);
	}

	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}

