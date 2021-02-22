#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';
	char b = 'A';

	do {
		putchar(i);
		i++;
	} while (i <= 'z');
	do {
		putchar(b);
		b++;
	} while (b <= 'Z');

	putchar('\n');
	return (0);
}
