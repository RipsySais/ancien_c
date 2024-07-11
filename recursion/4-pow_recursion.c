#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - fonction qui renvoie la valeur de x et y
 * @x: variable
 * @y: variable
 * Return: puissnace de x et y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	return (x *  _pow_recursion(x, y - 1));
}
