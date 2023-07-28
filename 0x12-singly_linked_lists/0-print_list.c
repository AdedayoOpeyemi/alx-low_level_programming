#include "lists.h"

/**
 * print_list - function to print a singly linked list
 * @h: pointer to head of singly linked list
 * Return: count of nodes in singly linked list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		} else
		{
			printf("[0] (nil)\n");
		}

		h = h->next;
		count++;
	}

	return (count);
}
