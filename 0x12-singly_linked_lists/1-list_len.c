#include "lists.h"

/**
 * list_len - functin to return number of nodes in list
 * @h: head of node
 * Return: count of nodes in list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
