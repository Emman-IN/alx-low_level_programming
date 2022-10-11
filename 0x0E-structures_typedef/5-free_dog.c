#include"dog.h"

/**
 * free_dog - frees structure variable at the end of the program
 * @d: structure variable
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
