#include"main.h"
/**
 * array_range - creates an ptr and initialises an ptr of int
 * @min: min index of ptr
 * @max: max index of ptr
 * Return: pointer to created ptr
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	/** 1-5 = 4 */
	if (!ptr)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	/**
	 * for (i = min; i <= max; i++)
	 *{
	 *ptr[i-min] = i;
	 *}
	 *since we're initialising with values of m
	 */
	return (ptr);
}
