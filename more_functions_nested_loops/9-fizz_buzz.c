#include <stdio.h>
/**
 * main - fizzbuzz
 * return: Always
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzbuzz");
		}
		else if (i % 3 == 0)
		{
			printf("fizz");
		}
		else if (i % 5 == 0)
		{
			printf("buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
		printf("\n");
	}
	fizz_buzz();
	return (0);
}
