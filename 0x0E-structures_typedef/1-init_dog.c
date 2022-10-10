#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - defines a new type `struct dog`
 * @d: struct dog
 * @name: char string parameter for dog name
 * @age: int parameter for dog age
 * @owner: char string parameter for dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
