#include "holberton.h"
/**
* *_strcat - a function that prints concatenates two strings
*@dest: first word
*@src: 2nd word
*Return: string
*/
char *_strcat(char *dest, char *src)
{
int i, j, k, l;
for (i = 0; dest[i] != '\0'; i++)
{
;
}
for (j = 0; src[j] != '\0'; j++)
{
;
}
l = 0;
for (k = i ; k <= (i + j); k++)
{
dest[k] = src[l];
l++;
}
return (dest);
}
