#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - The program creates a new dog
 * @name: An element in the struct dog
 * @age: An element in the struct dog
 * @owner: An element in the struct dog
 *
 * Return: POinter to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog)
	{
		newDog->name = malloc(strlen(name) + 1);
		newDog->owner = malloc(strlen(owner) + 1);
		newDog->age = age;

		if (newDog->name == NULL || newDog->owner == NULL)
		{
			free(newDog->name);
			free(newDog->owner);
			free(newDog);

			return (NULL);
		}

		newDog->age = age;
		strcpy(newDog->name, name);
		strcpy(newDog->owner, owner);
	}

	return (newDog);
}
