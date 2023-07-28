#include "lists.h"

/**
 * add_node - function to add node at the begining of a list list_t
 * @head: pointer to the head of list
 * @str: value of string to for the new node
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
		free(new_node);
		return (NULL);

	new_node->len = strlen(str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
