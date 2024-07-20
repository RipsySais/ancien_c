#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - une fonction qui libère les chiens
 * @d: pointeur
 */
void free_dog(dog_t *d)
{
	if (d != NULL)

	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
