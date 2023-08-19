#include "lists.h"

/**
 * free_dlistint - frees the dlistint_t
 * @head: head node of list
 * Return: pointer to new element
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp1 = NULL, *tmp2 = NULL, *tmp = NULL;

	if (!head)
		return;
	tmp1 = head;
	tmp2 = head->next;
	while (tmp1)
	{
		tmp = tmp1->prev;
		free(tmp1);
		tmp1  = tmp;
	}
	while (tmp2)
	{
		tmp = tmp2->prev;
		free(tmp2);
		tmp2  = tmp;
	}
}
