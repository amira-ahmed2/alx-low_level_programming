#include "search_algos.h"
/**
 * linear_search - that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: -1 or value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
