#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - entry point
 * @d: passing struct at the function
 * @name: string for main
 * @age: number for main
 * @owner: string for main
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
