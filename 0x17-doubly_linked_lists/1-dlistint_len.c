#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*dlistint_len - prints all elements of a list
*@h: head of the list
*Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t numberElements = 0;
while (h != NULL)
{
numberElements++;
h = h->next;
}
return (numberElements);
}
