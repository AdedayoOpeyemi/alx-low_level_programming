#include "lists.h"

/**
 * get_nodeint_at_index - gt node at index pos of a list
 * @head: pointer to list
 * @index: index position from which to get node
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}

		current = current->next;
		count++;
	}

	return (NULL);
}
