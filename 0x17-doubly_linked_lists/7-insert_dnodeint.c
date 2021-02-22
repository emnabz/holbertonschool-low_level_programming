#include "lists.h"
/**
*insert_dnodeint_at_index - inser a new node at given position
*@h: head of the list
*@idx: position
*@n: number passed
*Return: new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tempnode;
dlistint_t *newnode;
unsigned int counter;
tempnode = *h;
counter = 0;
while (tempnode && (counter < idx - 1))
{
tempnode = tempnode->next;
counter++;
}
if (tempnode || (counter == idx - 1) || idx == 0)
{
newnode = malloc(sizeof(dlistint_t));
if (newnode)
{
newnode->n = n;
if (idx == 0)
{
newnode->next = *h;
*h = newnode;
}
else
{
newnode->next = tempnode->next;
tempnode->next = newnode;
}
return (newnode);
}
}
return (NULL);
}
