#include "holberton.h"
/**
* _strcmp - adding two lines together
* @s1: first string
* @s2: 2nd string
* Return: result
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
int result;
while (s1[i] != '\0')
{
if (s1[i] != s2[i])
{
result = s1[i] - s2[i];
return (result);
}
i++;
}
return (0);
}
