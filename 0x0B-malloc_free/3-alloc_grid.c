#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: no items in each rows of the array
 * @height: no of rows in the array
 * Return: pointer to the aray of ints
 */


int **alloc_grid(int width, int height)
{
	int **arr, i;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(sizeof(int) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
	}
	return (arr);
}
