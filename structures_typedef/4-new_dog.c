#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct dog
 * if it fails, returns NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;
int i, lname, lowner;
my_dog = malloc(sizeof(*my_dog));
if (my_dog == NULL || !(name) || !(owner))
{
free(my_dog);
return (NULL);
}
for (lname = 0; name[lname]; lname++)
;
for (lowner = 0; owner[lowner]; lowner++)
;
my_dog->name = malloc(lname + 1);
my_dog->owner = malloc(lowner + 1);
if (!(my_dog->name) || !(my_dog->owner))
{
free(my_dog->owner);
free(my_dog->name);
free(my_dog);
return (NULL);
}
for (i = 0; i < lname; i++)
my_dog->name[i] = name[i];
my_dog->name[i] = '\0';
my_dog->age = age;
for (i = 0; i < lowner; i++)
my_dog->owner[i] = owner[i];
my_dog->owner[i] = '\0';
return (my_dog);
}
