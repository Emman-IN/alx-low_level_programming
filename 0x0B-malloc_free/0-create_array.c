#include "main.h"

/**
 * create_array - creates char array
 * and fills it witha a specific character (memset)
 * @size: size of array
 * @c: char to fill array with
 * Return: array created
 */

char *create_array(unsigned int size, char c)
{
	size_t i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[size] = '\0';
	return (arr);
}
