#include "lists.h"

/**
 * sum_listint - function to print sum of all data in a list
 * @head: pointer to head of list
 * Return: int sum value
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->data;
		current = current->next;
		}
	return (sum);
}
