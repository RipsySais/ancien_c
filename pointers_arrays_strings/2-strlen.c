#include <stdio.h>
#include <string.h>

/**
 * _strlen - une fonction qui renvoie la longueur d'une chaîne
 * @s: fait une chaine
 * Return: Nothing
 */

int	_strlen(char *s)
{
	int sais = 0;

	while (s[sais] != '\0')
		sais++;

	return (sais);
}
