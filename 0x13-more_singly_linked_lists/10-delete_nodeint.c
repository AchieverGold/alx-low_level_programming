#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element
 * @indx: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int indx)
{
listint_t *tmp = *head;
listint_t *curr = NULL;
unsigned int a = 0;
if (*head == NULL)
return (-1);
if (indx == 0)
{
*head = (*head)->next;
free(tmp);
return (1);
}
while (i < indx - 1)
{
if (!tmp || !(tmp->next))
return (-1);
tmp = tmp->next;
i++;
}

curr = tmp->next;
tmp->next = curr->next;
free(curr);
return (1);
}
