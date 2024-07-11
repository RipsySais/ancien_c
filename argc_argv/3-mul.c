#include <stdio.h>
#include <stdlib.h>
/**
 * main - un programme qui multiplie deux nombres
 * @argc: variable
 * @argv: pointeur
 * Return: 0
 */
int main(int argc, char **argv)
{
	int nombre1, nombre2;
	int resultat;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	nombre1 = atoi(argv[1]);
	nombre2 = atoi(argv[2]);
	resultat = nombre1 * nombre2;

	printf("%d\n", resultat);
	return (0);
}
