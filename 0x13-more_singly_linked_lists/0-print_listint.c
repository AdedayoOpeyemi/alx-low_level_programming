#include "lists.h"

/**
 * print_listint - function returns the number of elements in a linked list
 * @h: linked linked being checked
 * Return: number of elements in linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
