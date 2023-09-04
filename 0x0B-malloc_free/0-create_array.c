#include "main.h"
#include <stdlib.h>

/**
 * *create_array - that creates an array of chars, and initializes it
 * @size : size array
 * @c : initializes it with a specific char
 * Return : char is arr
 */

char *create_array(unsigned int size, char c)
{
char *arr = malloc(size);

if (size == 0 || arr == 0)
return (0);

while (size--)
arr[size] = c;

return (arr);
}
