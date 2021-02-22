
#include "holberton.h"

/**
 * print_alphabet - printing alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
	i++;
	}
	_putchar('\n');
}
