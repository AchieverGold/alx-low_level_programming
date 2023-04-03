#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node
 *
 * Return: pointer to the first node in the new one
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *back = NULL;
listint_t *forw = NULL;
while (*head)
{
forw = (*head)->forw;
(*head)->forw = back;
back = *head;
*head = forw;
}
*head = back;
return (*head);
}
