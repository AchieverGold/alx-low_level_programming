#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @indx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int indx, int n)
{
unsigned int a;
listint_t *newnode;
listint_t *tmp = *head;
newnode = malloc(sizeof(listint_t));
if (!newnode || !head)
return (NULL);
newnode->n = n;
newnode->next = NULL;
if (indx == 0)
{
newnode->next = *head;
*head = newnode;
return (new);
}
for (a = 0; tmp && a < indx; a++)
{
if (a == indx - 1)
{
newnode->next = tmp->next;
tmp->next = newnode;
return (newnode);
}
else
tmp = tmp->next;
}
return (NULL);
}
