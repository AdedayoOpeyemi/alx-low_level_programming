#include "lists.h"

/**
 * add_nodeint_end - function to add node to end of list
 * @head: list to be updated
 * @n: value of new node to be added
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	} else
	{
		listint_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (new_node);
}
