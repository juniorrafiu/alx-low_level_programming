#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - returns the length of a doubly linked list
 * @h: pointer to doubly linked list
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
