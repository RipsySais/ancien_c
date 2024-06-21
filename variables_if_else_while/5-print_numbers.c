#include <stdio.h>
/**
 * main-imprimer tous les nombres en un chiffre de base dix
 * Return: 0
 */

int main(void)
{
	int chiffre;

	for (chiffre = 0; chiffre < 10; chiffre++)
	{
		printf("%d", chiffre);
	}
	printf("\n");
	return (0);
}
