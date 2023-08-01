#include "lists.h"

/**
 * delete_nodeint_at_index - function to delete node at given index
 * @head: pointer to pointer of list head
 * @index: index position to be deleted
 * Return: 1 if successful and -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_to_delete, *current, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;

	while (current->next != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}

	if (current->next == NULL || count != index - 1)
	{
		return (-1);
	}

	node_to_delete = current->next;
	current->next = node_to_delete->next;
	free(node_to_delete);

	return (1);
}
