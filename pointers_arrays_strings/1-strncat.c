#include "main.h"
#include <string.h>
/**
 * _strncat - un fonction qui concatenat two strings
 * @dest: fonction qui concatenat
 * @src: fonction qui cncatenat
 * @n: int n
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest + strlen(dest);

	while (*src && n > 0)
	{
		*dest_end++ = *src++;
		n--;
	}
	*dest_end = '\0';
	return (dest);
}
