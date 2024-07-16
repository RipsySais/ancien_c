#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - fonction qui libère une grille bidimensionnelle précé
 * @grid: la grille a libérer
 * @height: la hauteur de la grille
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
