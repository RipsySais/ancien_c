#include <stdio.h>
/**
 * main - imprimer l'alphabet en miniscule sauf E et Q
 * Return: (success)
 */
int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		putchar(alpha);
	}
	putchar(alpha);
	putchar('\n');
	return (0);
}
