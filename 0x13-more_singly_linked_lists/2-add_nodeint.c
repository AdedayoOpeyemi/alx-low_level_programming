#include "lists.h"

/**
 * add_nodeint - add node to the beginning of a list
 * @head: list to which new node is to be added
 * @n: value of new node to be added
 * Return: the updated list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
