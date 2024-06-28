#include "main.h"
#include <string.h>
/**
 * puts_half - fonction qui imprime la moitié d'une chaîne
 * @str: a function that prints
 */
void puts_half(char *str)
{
	int longth = 0;
	int start;
	int i;

	while (str[longth] != '\0')
		longth++;
	if (longth % 2 == 0)
		start = longth / 2;
	else
	start = (longth + 1) / 2;
	for (i = start; i < longth; i++)
		_putchar(str[i]);
	_putchar('\n');
}
