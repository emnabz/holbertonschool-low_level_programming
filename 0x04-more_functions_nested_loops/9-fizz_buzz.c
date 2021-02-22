#include <stdio.h>
#include "holberton.h"
/**
 * main - show us the numbers that may be divided by 3 and 5 and both of them
 *
 * Return: Always 0.
 */

int main(void)
{
int i;
for (i = 1 ; i < 100 ; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");
else if (i % 5 == 0)
printf("Buzz ");
else if (i % 3 == 0)
printf("Fizz ");
else
printf("%d ", i);
}
printf("Buzz");
printf("\n");
return (0);
}
