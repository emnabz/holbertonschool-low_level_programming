#include "holberton.h"

/**
 * _isupper  - checks for upper case
 * @c: the value to be cheched
 * Return: 1 is is upper, 0 id not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
