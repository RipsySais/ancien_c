#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - une fonction qui trace une ligne diagonale
 * @n: une ligne diagonale int n
 * Return: Always
 */
void print_diagonal(int n)

{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
