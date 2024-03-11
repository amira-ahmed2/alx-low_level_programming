#include "search_algos.h"
/**
 * linear_search - that searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i, middle;
    size_t right = size - 1, left = 0;

    if (array == NULL)
		return (-1);

        while (left <= right)
        {
            printf("Searching in array: ");
            

        }
}