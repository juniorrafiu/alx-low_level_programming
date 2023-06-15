#include <stdlib.h>
#include "lists.h"
/**
 * *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to doubly linked list
 * @index: index value to be returned
 * Return: null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
