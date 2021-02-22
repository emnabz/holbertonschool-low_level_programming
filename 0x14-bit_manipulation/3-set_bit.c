#include "holberton.h"
/**
*set_bit - sets the value of a bit to 1 at given index
*@n: number
*@index: position
*Return: 1 for success, -1 for failure
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int byte_size;
byte_size = sizeof(unsigned long int) * 8;
if (index < byte_size)
{
*n = *n | (1 << index);
return (1);
}
return (-1);
}
