#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * *new_dog - create a new dog
 *
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *
 *Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int i, j;
if (name == NULL || owner == NULL)
return (NULL);
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
for (i = 0; name[i]; i++)
{
}
i++;
for (j = 0; owner[j]; j++)
{
}
j++;
d->name = malloc(sizeof(char) * i);
if (d->name == NULL)
{
free(d);
return (NULL);
}
d->owner = malloc(sizeof(char) * j);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
for (i = 0; name[i]; i++)
{
d->name[i] = name[i];
}
for (j = 0; owner[j]; j++)
{
d->owner[j] = owner[j];
}
d->age = age;
d->name[i] = '\0';
d->owner[j] = '\0';
return (d);
}
