#include "main.h"
/**
 * _strcat - ecrit une fonction qui concatenat two strings
 * @dest: concatenat
 * @src: concatenat two strings
 * Return: result
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
