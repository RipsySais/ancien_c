#include "main.h"
/**
 * print_rev - une fonction qui imprime une chaîne, à l'envers
 * @s: imprimer une chaine à l'envers
 */
void print_rev(char *s)
{
	int i = 0;
	int length = - 1;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
