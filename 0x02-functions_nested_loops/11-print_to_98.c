#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers up to 98
 * @n: number to be checked
 * Return: result
 */
void print_to_98(int n)
{
	while (n > 97 && n != 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n <= 97)
	{
	printf("%d, ", n);
	n++;
	}
	printf("98");
	putchar('\n');
}
