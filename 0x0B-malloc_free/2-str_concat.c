#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strlen - returns length of a string
* @s: value to be checked
* Return: length
*/
int _strlen(char *s)
{
int l = 0;
while (*(s + l))
l++;
return (l);
}
/**
* str_concat - returns copies of 2 strings
* @s1: first string
* @s2: second string
* Return: copy of both strings
*/
char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
int length;
int lens1 = 0;
int lens2 = 0;
char *space;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
lens1 = _strlen(s1);
lens2 = _strlen(s2);
length = lens1 + lens2;
lens2++;
space = malloc(length *sizeof(char));
for (i = 0; i < lens1; i++)
{
space[i] = s1[i];
}
for (j = 0; j < lens2; i++, j++)
{
space[i] = s2[j];
}
return (space);
}
