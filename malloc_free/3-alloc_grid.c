#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - qui renvoie un pointeur vers un tableau
 * d'entiers à 2 dimensions
 * @width: la hauteur d'un tableau
 * @height: la taille d'un tableau
 * Return: tableau
 */
int **alloc_grid(int width, int height)
{
	int  **array;
	int i, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));

		if (array[i])
		{
			for (k = 0; k < i; k++)
				free(array[k]);
			free(array);
			return (NULL);
		}

	}
	return (array);

}
