#include "holberton.h"
/**
* string_toupper - changes all lowercase to upper
* @p: pointer to string
* Return: values of array
*/
char *string_toupper(char *p)
{
int i = 0;
while (p[i] != '\0')
{
if (p[i] >= 'a' && p[i] <= 'z')
{
p[i] = p[i] - 32;
}
i++;
}
return (p);
}
