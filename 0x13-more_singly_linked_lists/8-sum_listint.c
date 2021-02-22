#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*sum_listint - sums up all n
*@head: pointer to the list
*Return: sum
*/
int sum_listint(listint_t *head)
{
listint_t *tempnode;
int sum;
tempnode = head;
sum = 0;
if (head == NULL)
{
return (0);
}
while (tempnode != NULL)
{
sum = sum + (tempnode->n);
tempnode = tempnode->next;
}
return (sum);
}
