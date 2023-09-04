#include "main.h"
#include <stdlib.h>

/**
 * create_array - that creates an array of chars
 *@size : size array
 * @c : initializes it with a specific char
 * Return: char is pointer to array is @arr or 0
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
