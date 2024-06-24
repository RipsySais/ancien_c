#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - imprime les nombres, de 0 à 9
 */
void print_most_numbers(void)
{
	int numero;

	for (numero = 0; numero <= 9; numero++)
	{
		if (numero == 2 || numero == 4)
		{
			continue;
		}
		else
		{
			_putchar(numero + '0');
		}
	}
	_putchar ('\n');
}
