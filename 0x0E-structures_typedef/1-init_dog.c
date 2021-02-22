#include "dog.h"
/**
* init_dog - initalize a variable of type struct dog
* @d: struct dog
* @name: char
* @age: float
* @owner: char
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
return;
else
d->name = name;
d->age = age;
d->owner = owner;
}
