#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the nth node of a dlistint_t list
 * @head: head node of list
 * @index: index of the new node
 * Return: nth node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int x = 0;

	if (!*head || !head)
		return (-1);
	tmp = *head;
	while (tmp->prev)
		tmp = tmp->prev;
	if (index == 0)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (; tmp; tmp = tmp->next, x++)
		if (x == index)
		{
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			if (tmp->prev)
				tmp->prev->next = tmp->next;
			free(tmp);
			return (1);
		}
	return (-1);
}
