#include "holberton.h"
/**
* print_diagonal - prints diagonal line
* @n: number to be checked
* Return: nothing
*/
void print_diagonal(int n)
{
int i;
int j;
if (n <= 0)
_putchar('\n');
for (i = 1; i <= n; i++)
{
for (j = 1; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
