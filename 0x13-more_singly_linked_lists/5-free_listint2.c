#include "lists.h"

/**
 * free_listint2 - functipn to free listint and set head to null
 * @head: pointer to head of list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next_node;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}

	*head = NULL;
}
