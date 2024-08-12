#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste list_t
 * @head: double pointeur
 * @str: Chaîne à dupliquer et à ajouter au nouveau nœud
 * Return: Adresse du nouvel élément
 */
list_t *add_node(list_t **head, const char *str)
{
	char *cpy_ptr;
	list_t *newNode;
	int count = 0;


	if (str == NULL)
		return (NULL);

	cpy_ptr = strdup(str);
	if (cpy_ptr == NULL)
		return (NULL);

	while (str[count])
		count++;

	newNode = malloc(sizeof(list_t));

	newNode->str = cpy_ptr;
	newNode->len = count;
	newNode->next = *head;

	if (newNode == NULL)
	{
		free(cpy_ptr);
		return (NULL);
	}

	*head = newNode;
	return (newNode);
}
