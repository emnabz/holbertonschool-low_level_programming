#include "holberton.h"

/**
* print_alphabet_x10 - print alphabet 10 times
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
int i = 0;

while (i  < 10)
{
int j = 'a';

while (j <= 'z')
{
_putchar(j);
j++;
}
i++;
_putchar('\n');
}
}
