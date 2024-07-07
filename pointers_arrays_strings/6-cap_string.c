#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *cap_string - une fonction qui met en majuscule tous les mots d'une chaîne
 * @str: pointer
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 ||
				str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
				str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
				str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
				str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
				str[i - 1] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
