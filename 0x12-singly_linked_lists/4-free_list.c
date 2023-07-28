#include "lists.h"

/**
 * free_list - function to free list
 * @head: head of list to be freed
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
