#include "search_algos.h"
/**
 * binary_search - that searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: -1 or value
 */
int binary_search(int *array, size_t size, int value)
{
    size_t middle, i;
	size_t right = size - 1, left = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < left + (right - left + 1); i++)
		{
			printf("%d%s", *(array + i), i < left + (right - left) ? ", " : "\n");
		}

		middle = floor((left + right) / 2);
		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
