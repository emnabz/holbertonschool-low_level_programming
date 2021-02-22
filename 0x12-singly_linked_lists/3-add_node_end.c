#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_strlen - string length finder
*@str: string passed
*Return: the size of a string
*/
int _strlen(const char *str)
{
unsigned int len;
len = 0;
while (str[len] != '\0')
len++;
return (len);
}
/**
 * add_node_end - adds a node at the end of the list
 * @head: pointer to first element of the list
 * @str: a string
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode;
list_t *tempnode;
if (str == NULL)
{
return (NULL);
}
newnode = malloc(sizeof(list_t));
newnode->str = strdup(str);
newnode->len = _strlen(str);
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
