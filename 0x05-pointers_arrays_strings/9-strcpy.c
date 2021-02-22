#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - _strcpy  function.
 * @dest: char to define the string
 * @src: char to define the string
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{

int i = 0;
int j;

while (src[i] != '\0')
i++;
for (j = 0; j < i; j++)
{
dest[j] = src[j];
}
dest[i] = '\0';
return (dest);
}
