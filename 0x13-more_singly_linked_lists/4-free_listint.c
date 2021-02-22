#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_listint - freeing the list
*@head: first element of the list
*Return: nothing
*/
void free_listint(listint_t *head)
{
listint_t *tempnode;
while (head != NULL)
{
tempnode = head;
head = head->next;
free(tempnode);
}
}
