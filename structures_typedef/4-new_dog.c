#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to a new dog_t (struct dog), NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggy;
char *new_name, *new_owner;

doggy = malloc(sizeof(dog_t));
if (doggy == NULL)
return (NULL);

new_name = malloc(strlen(name) + 1);
if (new_name == NULL)
{
free(doggy);
return (NULL);
}
strcpy(new_name, name);

new_owner = malloc(strlen(owner) + 1);
if (new_owner == NULL)
{
free(new_name);
free(doggy);
return (NULL);
}
strcpy(new_owner, owner);

doggy->name = new_name;
doggy->age = age;
doggy->owner = new_owner;

return (doggy);
}
