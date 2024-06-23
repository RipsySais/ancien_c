#include <stdio.h>
/**
 * main - imprimer toutes les combinaison possible du nombre a un chiffre
 * Return: 0
 */
int main(void)
{
	int nombre;

	{
		for (nombre = 0; nombre <= 10; nombre++)
			putchar((nombre % 10) + '0');
		if (nombre == 10)

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
