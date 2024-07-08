#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strspn - une fonction qui obtient la longueur
 * @s: pointeur
 * @accept: pointeur
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		++count;
		++s;
	}
	return (count);
}
