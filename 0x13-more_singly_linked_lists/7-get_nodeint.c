#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*get_nodeint_at_index - the index of the node
*@head: first element of the list
*@index: starting at 0
*Return: a node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *current = NULL;
if (!head)
{
return (NULL);
}
current = head;
for (i = 0; current && i < index; i++)
{
current = current->next;
}
if (!current)
{
return (NULL);
}
return (current);
}
