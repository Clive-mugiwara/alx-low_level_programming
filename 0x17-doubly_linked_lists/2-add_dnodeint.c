#include "lists.h"

/**
 * add_dnodeint - add new node to the beginning
 * @head: head node of the list
 * @n: value to be added
 * Return: pointer to new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL, *node = NULL;

	node = (dlistint_t *) malloc(sizeof(*node));
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (!*head)
	{
		*head = node;
		return (node);
	}
	tmp = *head;
	while (tmp->prev)
		tmp = tmp->prev;
	tmp->prev = node;
	node->next = tmp;
	*head = node;
	return (node);
}
