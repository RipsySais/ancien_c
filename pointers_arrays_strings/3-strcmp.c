#include "main.h"
/**
 * _strcmp - a function that compares two string
 * @s1: ecrit une fonction
 * @s2: fonction qui compare
 * Return: 0 ou difference string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((*s1 == *s2) ? 0 : (*(unsigned char *)s1 - *(unsigned char *)s2));
}
