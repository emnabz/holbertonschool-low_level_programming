#include <stdlib.h>
#include "function_pointers.h"
/**
*print_name - prints name using function pointer
*@name: name location
*@f: function pointed to
*Return: anything
*/
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
return;
(*f)(name);
}
