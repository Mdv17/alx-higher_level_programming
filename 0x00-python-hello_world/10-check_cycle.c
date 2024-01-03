#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to the head of the list
 * Return: 0 if no cycle, 1 if cycle
 */
int check_cycle(listint_t *list)
{
    listint_t *slow, *fast; /* pointers for traversal */

    if (list == NULL) /* empty list has no cycle */
        return (0);

    slow = list; /* initialize slow pointer to head */
    fast = list->next; /* initialize fast pointer to next node */

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        if (slow == fast) /* pointers meet at some node */
            return (1); /* cycle found */
        slow = slow->next; /* move slow pointer one node ahead */
        fast = fast->next->next; /* move fast pointer two nodes ahead */
    }

    return (0); /* no cycle */
}

