#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of arrays
 * @size: size of each member
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *mem;
	size_t i, sum;

	sum = nmemb * size;
mem = ptr;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; i < sum; i++)
	{
		mem[i] = 0;
	}
	return (ptr);
}
