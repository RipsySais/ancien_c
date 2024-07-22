#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - ne fonction qui imprime un nom
 * @name: nom a imprimer
 * @f: pointeur
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
