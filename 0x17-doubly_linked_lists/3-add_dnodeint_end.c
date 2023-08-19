#include "lists.h"

/**
 * add_dnodeint_end - add new node to the list end
 * @head: head node ofthe list
 * @n: value to be added
 * Return: pointer to new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
	while (tmp->next)
		tmp = tmp->next;
	node->prev = tmp;
	tmp->next = node;
		*head = node;
	return (node);
}
