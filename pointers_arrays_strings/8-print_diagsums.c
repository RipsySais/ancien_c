#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - imprimer une diagonal
 * @a: pointeur
 * @size: octet
 */
void print_diagsums(int *a, int size)
{
	int i;

	int diags1 = 0;
	int diags2 = 0;

	for (i = 0; i < size; i++)
	{
		diags1 += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		diags2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", diags1, diags2);
}
