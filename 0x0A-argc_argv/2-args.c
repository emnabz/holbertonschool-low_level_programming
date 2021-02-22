#include <stdio.h>
#include <stdlib.h>
/**
*main - print all arguments
*@argc: number of arguments$
*@argv: arguments entered
*Return: the string
*/
int main(__attribute__((unused))int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

