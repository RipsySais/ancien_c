#include "main.h"
#include <stdio.h>
/**
 * print_numbers - imprime les nombres, de 0 à 9, suivis d'une nouvelle ligne.
 * de  0 a 9
 * Return: void
 */
void print_numbers(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number++);
	}
	putchar ('\n');
}
