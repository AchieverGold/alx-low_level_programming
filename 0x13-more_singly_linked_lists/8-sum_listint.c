#include "lists.h"


/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum_list
 */

int sum_listint(listint_t *head)
{
int sum_list = 0;
listint_t *tmp = head;
while (tmp)
{
sum_list += tmp->n;
tmp = tmp->next;
}
return (sum_list);
}
