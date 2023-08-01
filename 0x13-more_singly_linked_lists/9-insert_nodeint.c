#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert node to a list at inde
 * @head: pointer to pointer of list head
 * @idx: index position for insertion
 * @n: value of node to be inserted
 * Return: new ead pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = (listint_t *)malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL || count != idx - 1)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
