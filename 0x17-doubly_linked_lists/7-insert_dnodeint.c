#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert elemeent at index
 * @h: head pointer
 * @idx: index to insert
 * @n: element to insert
 * Return:- address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new ==  NULL)
		return (NULL);
	new->n = n;
	temp = *h;

	if (*h == NULL || idx == 0)
	{
		new->next = temp;
		new->prev = NULL;
		if (temp != NULL)
			temp->prev = new;
		*h = new;
		return (new);
	}
	else
	{
		while (temp != NULL && i < idx - 1)
		{
			i++;
			temp = temp->next;
		}
		if (temp == NULL)
		{
			new->next = NULL;
			new->prev = temp;
			if (temp != NULL)
				temp->prev = new;
		}
		new->next = temp->next;
		new->prev = temp;
		if (temp->next != NULL)
			temp->next->prev = new;
		temp->next = new;
		return (new);
	}
	return (new);
}
