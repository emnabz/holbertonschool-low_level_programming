#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_dog - frees structure
*@d: structure
*Return: nothing
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
