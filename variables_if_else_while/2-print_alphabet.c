#include <stdio.h>

/**
 * main - putchar imprime l'alphabet en minuiscule
 * Return: (success)
 */
int main(void)
{
	char alphabet;
	for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)

	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
