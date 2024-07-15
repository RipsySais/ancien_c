#include "main.h"
#include <stdlib.h>
/**
 * create_array - crée un tableau de caractères et l'initialise
 * @size: la taille du tableau a crée
 * @c: caractères et l'initialise avec un caractère spécifique
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
