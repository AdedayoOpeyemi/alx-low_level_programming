#include "lists.h"

/**
 * reverse_listint - function to reverse list
 * @head: head of list
 * Return: head of list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;

	listint_t *prev = NULL;
	listint_t *current = *head;


	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}
