#include "lists.h"

/**
 * pop_listint - function to pop and return the value of head
 * @head: the pointer to pointert to the head of list
 * Return: value of the popped
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;

	*head = temp->next;
	free(temp);

	return (data);
}
