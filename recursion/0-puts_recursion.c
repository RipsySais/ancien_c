#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion -  imprime une chaîne, suivie d'une nouvelle ligne
 * @s: pointeur
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
