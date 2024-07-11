#include <stdlib.h>
#include <stdio.h>
/**
 * main - un programme qui imprime son nom
 * @argc: variable
 * @argv: pointeur
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
