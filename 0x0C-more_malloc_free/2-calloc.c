#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of arrays
 * @size: size of each member
 * Return: void pointer to address allocated for array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *mem;
	size_t i, sum;

	sum = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (!ptr)
	{
		return (NULL);
	}

	mem = ptr;
	/**
	 * mem points to same memory as ptr*/
	for (i = 0; i < sum; i++)
	{
		mem[i] = '\0';
	}
	return (ptr);
}
