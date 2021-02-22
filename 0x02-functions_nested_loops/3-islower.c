#include "holberton.h"

/**
* _islower - checks for lower case characters
* @c: ascii value
* Return: 1 for lowercase
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
