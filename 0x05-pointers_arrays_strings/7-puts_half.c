#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - puts_half  a string.
 * @str: char to define the string
*/

void puts_half(char *str)
{
int i, c, n, a;
i = 0;

while (str[i] != '\0')
++i;
if ((i % 2) == 0)
n = i / 2;
else
n = (i - 1) / 2;
c = i - n;
for (a = c; a < i; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
