#include <stdio.h>
/**
 * main - un programme qui imprime tous les arguments
 * @argc: variable
 * @argv: pointeur
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
