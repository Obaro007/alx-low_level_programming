#include "dog.h"

/**
 * init_dog - The program initializes a variable of type struct dog
 * @d: Pointer to the struct dog
 * @name: An element in the struct dog
 * @age: An element in the struct dog
 * @owner: An element in the struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
