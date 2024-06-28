#include "main.h"
#include <stdio.h>
/**
 * print_array -  fonction qui imprime n éléments d'un tableau d'entiers
 * @a: imprimer un élément N d'un tableau
 * @n: imprimer un élément
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
