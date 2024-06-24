#include "main.h"
#include <stdio.h>
/**
 * print_numbers - imprime les nombres, de 0 à 9, suivis d'une nouvelle ligne.
 * de  0 a 9
 * Return: void
 */
void print_numbers(void)

{
	char c;

	for (c = 0; c <= '9'; c++)
	{
		_putchar(c);
	}

	putchar('\n');
}
