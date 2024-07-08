#include "main.h"
#include <stddef.h>
/**
 * _memcpy - une fonction qui copie la zone memoire
 * @dest: pointeur
 * @src: pointeur
 * @n: int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
