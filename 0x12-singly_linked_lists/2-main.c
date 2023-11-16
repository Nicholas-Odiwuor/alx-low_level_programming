#include "lists.h"
#include <stdio.h>

int main(void) 
{
    list_t *head = NULL; // Initialize an empty linked list

    /* Add nodes to the beginning of the list */
    add_node(&head, "World");
    add_node(&head, "Hello");

    /* Print the linked list */
    printf("Linked List:\n");
    print_list(head);

    /* Print the number of elements in the linked list */
    printf("Number of elements: %lu\n", list_len(head));

    return 0;
}

