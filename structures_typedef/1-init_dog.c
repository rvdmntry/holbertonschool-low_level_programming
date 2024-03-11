#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize the dog
 * @d: dog
 * @age: dog age
 * @name: dog name
 * @owner: owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
