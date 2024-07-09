#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - imprime une chaîne à l’envers
 * @s: pointeur
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
