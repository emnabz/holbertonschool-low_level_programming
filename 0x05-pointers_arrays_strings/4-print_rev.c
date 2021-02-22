#include "holberton.h"
/**
*print_rev -prints a string in reverse followed by a new line
*@s : pointer
*/
void print_rev(char *s)
{
char *k;
k = s;
while (*s != '\0')
{
s++;
}
while (s != k)
{
s--;
_putchar(*s);
}
_putchar('\n');
}
