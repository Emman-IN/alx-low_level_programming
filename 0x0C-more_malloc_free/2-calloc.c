#include "main.h"

/**
 * _calloc -allocates memory for an array, using malloc
 * @nmemb: number of arrays
 * @size: size of each member
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; ptr[i]; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
