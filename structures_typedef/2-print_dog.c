#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  print_dog -  fonction qui imprime une structure dog
 *  @d: pointeur
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Nom : (nil)\n");
	}

	else
	{
		printf("Nom : %s\n", d->name);
	}

	printf("Age : %.1f\n", d->age);

	if (d->owner == NULL)
	{
		printf("propriétaire : (nil)\n");
	}

	else
	{
		printf("Owner : %s\n", d->owner);
	}
}
