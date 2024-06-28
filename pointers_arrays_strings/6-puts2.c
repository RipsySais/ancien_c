#include "main.h"
#include <stdio.h>

/**
 * puts2 - une fonction qui imprime un caractère sur deux d'une chaîne
 * @str: a function that prints
 */

void puts2(char *str)
{
	int i = 0;
	int lont = 0;

	while (str[lont] != '\0')
		lont++;

	for (i = 0; i < lont; i += 2)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
}
