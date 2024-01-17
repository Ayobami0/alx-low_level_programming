#include "search_algos.h"
#include <stdio.h>

void print(int *array, size_t start, size_t stop);
/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value in the array, -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int start, end, mid;

	if (!array)
		return (-1);

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		print(array, start, end);
		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);
}

/**
 * print - Prints elements of an array within a range
 * @array: Pointer to the first element of the array
 * @start: Start index of the range
 * @stop: Stop index of the range
 */
void print(int *array, size_t start, size_t stop)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < stop + 1; i++)
	{
		printf("%i", array[i]);
		if (i != (stop))
			printf(", ");
	}
	printf("\n");
}
