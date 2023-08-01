#include "lists.h"

/**
 * pop_listint - function to pop and return the value of head
 * @head: the pointer to pointert to the head of list
 * Return: value of the popped
 */

int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);

	listint_t *temp = *head;
	int data = temp->n;

	*head = temp->next;
	free(temp);

	return (data);
}
