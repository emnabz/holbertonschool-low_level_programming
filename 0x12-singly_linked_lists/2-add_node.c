#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
*_strlen - counts th elength of a string
*@str: the string
*Return: string length
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
*add_node - adds a new node at the beggining of the list
*@head: the first node
*@str: string passed
*Return: address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;
if (str == NULL)
{
return (NULL);
}
newnode = malloc(sizeof(list_t));
newnode->str = strdup(str);
newnode->len = _strlen(str);
newnode->next = *head;
*head = newnode;
return (newnode);
}
