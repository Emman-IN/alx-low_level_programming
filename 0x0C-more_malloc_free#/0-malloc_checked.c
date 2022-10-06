#include "main.h"


/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
 */


void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit (98);
		/**
		 * use exit since return type is void
		 */
	}

	return (mem);
	/**
	 * function returns a void pointer
	 * which contains an address
	 */
}
