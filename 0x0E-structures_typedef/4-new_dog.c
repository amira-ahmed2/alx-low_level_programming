#include "dog.h"
#include <stdio.h>

/**
 * str_len - function that get string length
 * @s : the string
 * Return: number length of string
 */
int str_len(const char s)
{
int len = 0;

while (*s)
len++;
return (len);
}

/**
 * str_copy - function that get string length
 * @s : the string
 * @d : copy of the string
 * Return: copy of the string
 */
int str_copy(char *s, char *d)
{
int i;

for (i = 0; s[i]; i++)
d[i] = s[i];
d[i] = '\0';
return (d);
}

/**
 * new_dog - function that prints a struct dog
 * @name : dog name
 * @age : dog age
 * @owner : dog owner
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (!name || age < 0 || !owner)
return (NULL);
dog = (dog_t *) malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (str_len(name) + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (str_len(owner) + 1));
if ((*dog).owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->name = str_copy(dog->name, name);
dog->age = age;
dog->owner = str_copy(dog->owner, owner);
return (dog);
}
