#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at a given position
 * @head: pointer to the pointer of the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int count = 0;

    if (head == NULL || *head == NULL)
    {
        return -1;
    }

    if (index == 0)
    {
        *head = (*head)->next;

        if (*head != NULL)
        {
            (*head)->prev = NULL;
        }

        free(current);
        return 1;
    }

        while (current != NULL && count < index)
    {
        current = current->next;
        count++;
    }

    if (current == NULL)
    {
        return -1;
    }

    if (current->next != NULL)
    {
        current->next->prev = current->prev;
    }

    if (current->prev != NULL)
    {
        current->prev->next = current->next;
    }

    free(current);
    return 1;
}