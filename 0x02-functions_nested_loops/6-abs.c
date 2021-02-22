#include "holberton.h"

/**
 * _abs - computes the absolute value
 * @i: the value to be checked
 * Return: absolute value
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	return (i);
}
