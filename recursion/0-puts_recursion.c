#include "main.h"
/**
 * _puts_recursion -  imprime une chaîne, suivie d'une nouvelle ligne
 * @s: pointeur
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
