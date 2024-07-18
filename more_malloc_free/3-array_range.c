#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - une fonction qui crée un tableau d'entiers
 * @min:la valeur
 * @max: la valeur
 * Return: 0
 */
int *array_range(int min, int max)
{
	int i;
	int *array;
	int contain = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(contain * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < contain; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
