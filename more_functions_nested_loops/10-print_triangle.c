#include "main.h"
#include <stdio.h>
/**
 * print_triangle - une fonction qui imprime un triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 1; a <= size; a++)
	{
		for (b = size - a; b > 0; b--)
		{
			_putchar(' ');
		}
		for (c = 0; c < a; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
