#include "lists.h"
/**
* free_dlistint - frees the list
* @head: head of the list
* Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
