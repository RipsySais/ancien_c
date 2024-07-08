#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strpbrk - imprimer
 * @s: pointeur
 * @accept: pointeur
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		++s;
	}
	return (0);
}


