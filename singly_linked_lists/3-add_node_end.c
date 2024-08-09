#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - une fonction qui ajoute un
 * nouveau nœud à la fin d'une liste list_t
 * @head: double pointeur head
 * @str: une fonction qui ajoute un nouveau
 * nœud à la fin d'une liste list_t
 * Return: Adresse du nouvel élément,ou NULL en cas d'échec
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *cpy_ptr;
	list_t *newNode;
	list_t *last;
	int index = 0;

	if (str == NULL)
		return (NULL);

	cpy_ptr = strdup(str);
	if (cpy_ptr == NULL)
		return (NULL);

	while (str[index])
		index++;

	newNode = malloc(sizeof(list_t));
	if (head == NULL)
		return (newNode);

	newNode->str = cpy_ptr;
	newNode->len = index;
	newNode->next = NULL;

	if (newNode == NULL)
	{
		free(cpy_ptr);
		return (NULL);
	}
	if (*head == NULL)
		*head = newNode;
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newNode;
	}
	return (newNode);
}
