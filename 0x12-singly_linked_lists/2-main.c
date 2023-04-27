#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_nodeint(&head, *"Alexandro");
    add_nodeint(&head, *"Asaia");
    add_nodeint(&head, *"Augustin");
    add_nodeint(&head, *"Bennett");
    add_nodeint(&head, *"Bilal");
    add_nodeint(&head, *"Chandler");
    add_nodeint(&head, *"Damian");
    add_nodeint(&head, *"Daniel");
    add_nodeint(&head, *"Dora");
    add_nodeint(&head, *"Electra");
    add_nodeint(&head, *"Gloria");
    add_nodeint(&head, *"Joe");
    add_nodeint(&head, *"John");
    add_nodeint(&head, *"John");
    add_nodeint(&head, *"Josquin");
    add_nodeint(&head, *"Kris");
    add_nodeint(&head, *"Marine");
    add_nodeint(&head, *"Mason");
    add_nodeint(&head, *"Praylin");
    add_nodeint(&head, *"Rick");
    add_nodeint(&head, *"Rick");
    add_nodeint(&head, *"Rona");
    add_nodeint(&head, *"Siphan");
    add_nodeint(&head, *"Sravanthi");
    add_nodeint(&head, *"Steven");
    add_nodeint(&head, *"Tasneem");
    add_nodeint(&head, *"William");
    add_nodeint(&head, *"Zee");
    print_list_int(head);
    return (0);
}
