#include <stdlib.h>
#include "lists.h"
/**
 * *insert_dnodeint_at_index -  inserts a new node at a given position
 * @*h: pointer to doubly linked list
 * @n: value of node
 * @idx: index
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	/* Create a new node */
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		/* Insert at the beginning */
		if (*h != NULL)
			(*h)->prev = new_node;
		new_node->next = *h;
		*h = new_node;
	}
	else
	{
		/* Find the position to insert the new node */
		temp = *h;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		/* Insert at the desired position */
		new_node->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = new_node;
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (new_node);
}
