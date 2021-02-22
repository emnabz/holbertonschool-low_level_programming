#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*create_array - creats an array of chars
*@size: number of bytes to allocate
*@c: characters to place
*Return: Null is size 0, else pointer to an array
*/
char *create_array(unsigned int size, char c)
{
char *arrai;
unsigned int i;
i = 0;
if (size == 0)
{
return (NULL);
}
arrai = malloc(size * sizeof(char));
if (i < size)
{
while (i < size)
{
arrai[i] = c;
i++;
}
return (arrai);
}
else
{
return (0);
}
}
