#include <stdio.h>
/**
 * main - imprimer tous les nombres a un chiffre de base dix par zero
 * Return: 0
 */
int main(void)

{
	int nombre;

	for (nombre = 0; nombre < 10; nombre++)
	{
		putchar((nombre % 10) + '0');
	}
	putchar('\n');
	return (0);
}
