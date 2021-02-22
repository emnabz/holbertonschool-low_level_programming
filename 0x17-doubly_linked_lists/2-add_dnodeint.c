#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
*add_dnodeint - adds new node at the begining
*@head: head of the list
*@n: number passed
*Return: new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (0);
new->prev = NULL;
new->next = *head;
new->n = n;
if (*head != NULL)
(*head)->prev = new;
*head = new;
return (*head);
}
