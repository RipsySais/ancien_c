#include "main.h"
#include <ctype.h>
/**
 * string_toupper - fonction qui change toutes les lettres minuscules
 * @str: fuction
 * Return: str
 */
char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
