#include "lists.h"

/**
 * print_listint_safe - function to print a linked list
 * @head: head of list
 * Return: size of list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->data);
		count++;
		current = current->next;

		if (current == head)
		{
			printf("-> [%p] %d (loop)\n", (void *)current, current->data);
			exit(98);
		}
	}

	return (count);
}
