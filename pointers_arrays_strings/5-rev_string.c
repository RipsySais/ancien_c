#include "main.h"
/**
 * rev_string - une fonction qui inverse une chaine
 * @s: qui inverse une chaine
 */
void rev_string(char *s)
{
	int i = 0;
	int rent = 0;
	char aux;

	while (s[i] != '\0')
		i++;

	while (rent < i--)
	{
		aux = s[rent];
		s[rent++] = s[i];
		s[i] = aux;
	}
}
