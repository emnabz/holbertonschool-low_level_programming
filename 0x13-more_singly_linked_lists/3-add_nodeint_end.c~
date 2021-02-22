#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - adding an int node at the end
 * @head: first element
 * @n: int value
 * Return: the address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tempnode;

	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	newnode->next = NULL;
	if (*head != NULL)
	{
		tempnode = *head;
		while (tempnode->next)
		{
			tempnode = tempnode->next;
		}
		tempnode->next = newnode;
	}
	else
			*head = newnode;
	return (newnode);
}
