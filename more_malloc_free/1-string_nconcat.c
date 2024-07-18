#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - une fonction qui concatène deux chaînes
 * @s1: pointeur
 * @s2: pointeur
 * @n: variable
 * Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index;
	unsigned int len1, len2;
	unsigned int oct;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n >= len2)

		n = len2;

	oct = len1 + n;

	ptr = malloc(sizeof(char) * (oct + 1));

	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < len1; index++)
	{
		ptr[index] = s1[index];
	}

	for (index = 0; index < n; index++)
	{
		ptr[index + len1] = s2[index];
	}

	ptr[len1 + n] = '\0';

	return (ptr);
}

