#include "dog.h"
#include <stdio.h>

/**
 * init_dog - fonction qui initialise une variable de type struct dog
 * @d: pointeur
 * @name: nom du chien
 * @age: age du chien
 * @owner: proprietaire du chien
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

