#include "holberton.h"
/**
*_puts - Prints a string followed by a new line
*@str: pointer
*Return: void
*/
void _puts(char *str)
{
int i;
for (i = 0; *str != '\0'; i++)
{
_putchar (*str);
str++;
}
_putchar ('\n');
}
