#include "holberton.h"
/**
* _strpbrk - locates the first occurrence
* @s: the string
* @accept: chars to compare
* Return: bytes of accept
*/
char *_strpbrk(char *s, char *accept)
{
int i;
int j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (s + i);
}
}
}
return (0);
}
