#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*list_len - returns the number of elements
*@h: pointer
*Return: number of elements
*/
size_t list_len(const list_t *h)
{
size_t len = 0;
int i;
const list_t *e = h;
for (i = 0; e; i++)
{
e = e->next;
len++;
}
return (len);
}
