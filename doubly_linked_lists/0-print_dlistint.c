#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_dlistint - Écrivez une fonction qui imprime tous
 * les éléments d'une liste dlistint_t
 * @h: pointeur doublement chainée
 * Return: round
 */

size_t print_dlistint(const dlistint_t *h)
{
	int round;

	round = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		round++;
	}

	return (round);
}
