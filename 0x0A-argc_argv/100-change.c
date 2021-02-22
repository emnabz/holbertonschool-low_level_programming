#include <stdlib.h>
#include <stdio.h>
/**
*main - make a change for an amount of money
*@argc: number of arguments
*@argv: Array
*Return: 0
*/
int main(int argc, char **argv)
{
int num;
int change = 0;
int a = 25;
int b = 10;
int c = 5;
int d = 2;
int e = 1;
if (argc != 2)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);
while (num > 0)
{
if (num >= 25)
{
num -= a;
}
else if (num >= 10)
{
num -= b;
}
else if (num >= 5)
{
num -= c;
}
else if (num >= 2)
{
num -= d;
}
else
{
num -= e;
}
change++;
}
printf("%d\n", change);
return (0);
}
