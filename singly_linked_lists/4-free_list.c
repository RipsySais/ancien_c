#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - Écrivez une fonction qui libère une liste list_t
 * @head: pointeur de tete
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;

		free(current->str);

		free(current);

		current = next;
	}
}

