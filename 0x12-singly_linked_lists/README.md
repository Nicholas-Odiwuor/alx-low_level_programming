# Linked List Printer

This project contains a C program with a function that prints all elements of a linked list.

## Functionality

The `print_list` function takes a linked list of type `list_t` and prints each element along with its length. If a node's string (`str`) is `NULL`, it prints `nil`.

## Usage

To use this function, include the `lists.h` header file in your program and call `print_list` with a valid linked list.

Example:

```c
#include "lists.h"
#include <stdio.h>

int main(void) {
    list_t *head = /* your linked list creation logic */;
    size_t nodes_printed = print_list(head);
    
    printf("Total nodes printed: %lu\n", nodes_printed);
    
    return 0;
}

