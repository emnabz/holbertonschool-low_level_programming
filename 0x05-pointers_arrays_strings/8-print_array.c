#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print_array  a string.
 * @a: pointer to define the string
 * @n: integer
*/

void print_array(int *a, int n)
{
int i;
for (i = 0; i <= n - 1; ++i)
{
if (i != (n - 1))
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
printf("\n");
}
