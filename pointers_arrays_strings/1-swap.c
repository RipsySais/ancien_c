#include <stdio.h>
/**
 * swap_int - une fonction qui échange les valeurs de deux entiers
 * @a: valeur du pointeur
 * @b: valeur du pointeur
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;
}
