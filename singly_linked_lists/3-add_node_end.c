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
	char *duplicata_str;
	list_t *newNode;
	int relax = 0;



	if (str == NULL)
	{
		return (NULL);
	}

	duplicata_str = strdup(str);

	if (duplicata_str == NULL)
		return (NULL);

	while (str[relax])
		relax++;

	newNode = malloc(sizeof(list_t));

	newNode->str = duplicata_str;
	newNode->len = relax;
	newNode->next = *head;

	if (newNode == NULL)
	{
		free(duplicata_str);
		return (NULL);
	}

	*head = newNode;

	return (newNode);
}
