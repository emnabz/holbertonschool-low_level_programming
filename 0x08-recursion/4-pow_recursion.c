#include "holberton.h"
/**
*_pow_recursion - returns value raised to a power
*@x: number to raise
*@y: raised to y power
*Return: the value
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
