#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Function prints a struct dog
 * @d: dog struct
 * Description: If an element of d is NULL, print (nil) instead of this
 * element. (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
		(*d).name != NULL ? d->name : "(nil)",
		(*d).age,
		(*d).owner != NULL ? d->owner : "(nil)");
	}
}
