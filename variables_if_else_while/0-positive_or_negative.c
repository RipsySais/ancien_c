#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - nbr positif ou negatif
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d \n", n);
	if (n > 0)
	{
		printf("%d is positif \n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negatif\n", n);
	}
}
