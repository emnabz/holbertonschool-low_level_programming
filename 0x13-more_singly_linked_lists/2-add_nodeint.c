#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint - adding a node to the beginning of the list
*@head: first element
*@n: number of elements
*Return: the address of a new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;
if (head != NULL)
{
newnode = malloc(sizeof(listint_t));
newnode->n = n;
newnode->next = *head;
*head = newnode;
return (newnode);
}
else
return (NULL);
}
