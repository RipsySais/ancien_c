#include "main.h"
#include <stdio.h>

/**
 * puts2 - une fonction qui imprime un caractère sur deux d'une chaîne
 * @str: a function that prints
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
}
