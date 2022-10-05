#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: no items in each rows of the array
 * @height: no of rows in the array
 * Return: pointer to the aray of ints
 */


int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		/**
		 * if height/row is null loop through cols of that row
		 * and free cols then free overall array
		 */
		if (arr[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
