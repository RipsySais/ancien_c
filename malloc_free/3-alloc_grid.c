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
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
			if (array[i] == NULL)
				return (NULL);
	}

	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
}
