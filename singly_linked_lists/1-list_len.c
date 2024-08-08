#include "lists.h"
#include <stdio.h>
/**
 * list_len - une fonction qui renvoie le nombre
 * d'éléments dans une liste list_t chaînée
 * @h: pointeur
 * Return: nombres d'elements dans la liste
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
