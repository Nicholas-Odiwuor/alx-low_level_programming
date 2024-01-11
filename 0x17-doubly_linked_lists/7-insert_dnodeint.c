#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the doubly linked list
 * @idx: Index where the new node should be added (starting from 0)
 * @n: Value to be inserted into the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new, *current, *next;
    unsigned int i;

    if (h == NULL)
        return (NULL);

    if (idx != 0)
    {
        current = *h;
        for (i = 0; i < idx - 1 && current != NULL; i++)
            current = current->next;

        if (current == NULL)
            return (NULL);
    }

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;

    if (idx == 0)
    {
        next = *h;
        *h = new;
        new->prev = NULL;
    }
    else
    {
        new->prev = current;
        next = current->next;
        current->next = new;
    }

    new->next = next;
    if (new->next != NULL)
        new->next->prev = new;

    return (new);
}
