#include "holberton.h"
/**
* _strncat - a function that concatenates two strings
*@dest: return a pointer
*@src: does not need to be null-terminaed
*@n: bytes
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
;
}
for (j = 0; j < n; i++, j++)
{
dest[i] = src[j];
}
return (dest);
}
