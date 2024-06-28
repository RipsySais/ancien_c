#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * char *_strcpy - une fonction qui copie la chaîne pointée par src
 * @dest: copie la chaine pointer
 * @src: Write a function that copies the string pointed
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *test = dest;

	while (*src)
		*dest++ = *src++;
	return (test);
}
