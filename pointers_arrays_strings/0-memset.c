#include "main.h"
#include <stddef.h>
/**
 * _memset - une fonction qui remplit la mémoire avec un octet constant
 * @s: pointeur
 * @b: pointeur
 * @n: pointeur
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
