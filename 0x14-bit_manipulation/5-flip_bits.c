#include "holberton.h"
/**
*flip_bits - returns the number of bits you would need to flip
*@n: unsigned long int
*@m: unsigned long int
*Return: number of bits you would need to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int v;
int i = 0;
v = n ^ m;
while (v >= 1)
{
if ((v & 1) == 1)
i++;
v >>= 1;
}
return (i);
}
