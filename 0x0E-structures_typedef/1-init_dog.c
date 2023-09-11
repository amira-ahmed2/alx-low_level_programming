#include "dog.h"

/**
 * init_dog - that initialize a variable of type struct dog
 * @d : is intilazed of struct dog
 * @name : name of dog
 * @age : age of dog
 * @owner : dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
