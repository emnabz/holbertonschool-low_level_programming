#include "holberton.h"
/**
* _strncpy - a function that copies a string
*@dest: first word
*@src: copy a string
*@n: bytes
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int j = 0;
while (src[j] != '\0' && j < n)
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
