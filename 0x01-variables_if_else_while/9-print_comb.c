#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
		if (i <= 9)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

