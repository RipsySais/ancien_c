#include "main.h"
/**
 * _puts - une fonction qui imprime une chaine
 * @str: a function that prints a string
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;

	_putchar('\0');
	}

	_putchar('\n');
}
