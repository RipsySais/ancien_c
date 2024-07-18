#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - une fonction qui alloue
 * de la mémoire à l'aide de malloc
 * @b:  une fonction qui alloue
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
