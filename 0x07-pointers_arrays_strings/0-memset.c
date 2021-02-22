#include "holberton.h"
/**
*_memset - fills memory with a constant byte.
*@s: pointed by it
*@b: pointed by it
*@n: number of bytes
*Return: pointer to s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
