#include "lists.h"

/**
 * sum_dlistint - sum of all nodes of a dlistint_t list
 * @head: head node of list to count
 * Return: nth node
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;
	size_t sum = 0;

	if (!head)
		return (sum);
	tmp = head;
	while (tmp->prev)
		tmp = tmp->prev;
	for (; tmp; tmp = tmp->next)
		sum += tmp->n;
	return (sum);
}
