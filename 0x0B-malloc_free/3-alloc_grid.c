#include "main.h"
#include <stdlib.h>

/**
*	alloc_grid - returns a pointer to a 2
*	dimensional array of integers.
*	@width: numbers of columns in the array
*	@height: numbers of rows in the array
*
*	Return: the address of the array(pointer)
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	arr = malloc(sizeof(int *) * height);

	for (i = 0; i < width; i++)
		arr[i] = malloc(sizeof(int));

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);
}
