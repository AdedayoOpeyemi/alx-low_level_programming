#include "lists.h"

/**
 * free_listint - function to free listint
 * @head: list to be freed
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
