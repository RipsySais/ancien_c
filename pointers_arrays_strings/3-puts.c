#include "main.h"
/**
 * _puts - une fonction qui imprime une chaine
 * @str: a function that prints a string
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
