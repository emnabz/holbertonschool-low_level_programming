#include "holberton.h"

/**
 * print_number - print numbers with putchar
 * @n: numbers to be printed
 * Return: nothing
 */
void print_number(int n)
{
	while (n >= 0)
	{
		if (n / 10)
			print_number(n / 10);
		{
			_putchar((n % 10) + '0');
		}
		break;
	}
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
