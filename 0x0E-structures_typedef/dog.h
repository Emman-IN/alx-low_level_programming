#ifndef DOG
#define DOG

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - is a structure for a dog object
 * @name: is the name element
 * @age: is the age element
 * @owner: is the owner element
 */
struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

