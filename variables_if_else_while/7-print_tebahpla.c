#include <stdio.h>
/**
 * main - imprimer l'aphabet minuscule en envers suivi d'une new ligne
 * Return: 0
 */
int main(void)
{
	char miniscule;
	{
		for (miniscule = 'z'; miniscule >= 'a'; miniscule--)
		putchar(miniscule);
	}
	putchar('\n');
	return (0);
}
