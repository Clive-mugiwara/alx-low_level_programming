#include "lists.h"

/**
 * dlistint_len - gets no. of elements in list
 * @h: head node of the list
 * Return: number of printed nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *tmp = NULL;
	size_t x = 0;

	if (!h)
		return (x);
	tmp = (dlistint_t *)h;
	while (tmp->prev)
		tmp = tmp->prev;
	for (; tmp; tmp = tmp->next, x++)
		;
	return (x);
}
