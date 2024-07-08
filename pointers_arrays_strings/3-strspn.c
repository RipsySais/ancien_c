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
	int i, x;
	int longue = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				longue++;
				break;
			}
		}
		if (accept[x] == '\0')
		{
			return (longue);
		}
	}
	return (longue);
}
