#include <stdio.h>
/**
 * main - un programme qui imprime le nombre d’arguments
 * @argc: variable
 * @argv: pointeur
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)**argv;

	printf("%d\n", argc - 1);
	return (0);
}
