#include "lists.h"

/**
 * free_listint_safe - function to safely free list
 * @h: pointer to pointer of head of list
 * Return: count of nodes removed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
	listint_t *next_node = NULL;

	while (current != NULL)
	{
		count++;
		next_node = current->next;
		free(current);
		current = next_node;

		if (current == *h)
		{
			*h = NULL;
			return (count);
		}
	}

	return (count);
}
