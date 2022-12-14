#include"dog.h"

/**
 * new_dog - function that creates a new dog.
 * creates a new structure variable of type dog_t
 * initialise the struct members
 *
 * @name: name of struct member
 * @age: age of struct member
 * @owner: owner
 * Return: pointer to struct variable of type dog_t
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner, i;
	dog_t *dog;

	for (len_name = 0; name[len_name]; len_name++)
		;
	for (len_owner = 0; owner[len_owner]; len_owner++)
		;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(len_name + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{
		dog->name[i] = name[i];
	}
	dog->age = age;
	/** always 4bytes since its an int*/
	dog->owner = malloc(len_owner + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
	{
		dog->owner[i] = owner[i];
	}
	return (dog);
}
