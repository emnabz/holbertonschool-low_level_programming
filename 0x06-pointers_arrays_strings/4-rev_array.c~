#include "holberton.h"

/**
 * reverse_array - reversing the array
 * @a: array of ints
 * @n: number of element in array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	int l = n - 1;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[l];
		a[l] = temp;
		i++;
		l--;
	}
}
