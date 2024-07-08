#include "main.h"
#include <stddef.h>
/**
 * _strchr: une fonction qui localise un caractère dans une chaîne
 * @s: pointeur
 * @c: pointeur
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		++s;
	}
	if (c == '\0')
		return (s);

	return (0);
}
