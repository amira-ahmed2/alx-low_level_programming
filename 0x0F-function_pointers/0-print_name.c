#include <stdlib.h>
#include "function_pointers.h"
#include<stdio.h>

/**
 * print_name - that prints a name.
 * @name : string one
 * @f : the pointer fun
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
