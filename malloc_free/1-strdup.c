#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplique une chaine de caractere
 * @str: la chaine de caracter
 * Return: 0
 */
char *_strdup(char *str);
{
	int index;
	char *s;
	int lenght = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[lenght] != '\0')
	{
		lenght++;
	}

	s = malloc(sizeof(char) * (lenght + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (index = 0; index <= lenght; index++)
	{
		s[index] = str[index];
	}
	s [index] = '\0';
	return: (s);
}
