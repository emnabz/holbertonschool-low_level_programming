#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_numbers - prints numbers
* @separator: string printed between numbers
* @n: number of parameteres
* Return: result
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list param;
unsigned int i;
va_start(param, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(param, int));
if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(param);
}
