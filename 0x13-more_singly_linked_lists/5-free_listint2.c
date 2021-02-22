#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
*free_listint2 - frees another list
*@head: first element of the list
*Return: nothing
*/
void free_listint2(listint_t **head)
{
listint_t *tempnode;
if (head == NULL)
return;
while (*head != NULL)
{
tempnode = *head;
*head = tempnode->next;
free(tempnode);
}
*head = NULL;
}
