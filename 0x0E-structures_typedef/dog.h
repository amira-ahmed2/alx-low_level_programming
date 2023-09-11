#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - struct dog
 * @name : name of dog
 * @age : age of dog
 * @owner : owner of dog
 *
 * Description : Define a new type struct dog with the following elements
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
