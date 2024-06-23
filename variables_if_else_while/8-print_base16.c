#include <stdio.h>
/**
 * main - imprimer tout les nombres 16 en miniscule suivi d'un ligne
 *
 * Return: 0
 */
int main(void)
{
	int nombre;
	int seize;

	{
		for (nombre = 0; nombre < 10; nombre++)
			putchar((nombre % 10) + '0');

		for (seize = 0; seize < 10; seize++)
			putchar((seize % 10) + '0');
	}
	putchar('\n');
	return (0);
}
