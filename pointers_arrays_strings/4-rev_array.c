#include "main.h"
/**
 * reverse_array - Write a function that reverses the content of an array
 * @a: ecrit une fonction qui reverse le contenu
 * @n: ecrit une fonction
 */
void reverse_array(int *a, int n)
{
	int left = 0;
	int right = n - 1;

	while (left < right)
	{
		int temp = a[left];

		a[left] = a[right];
		a[right] = temp;

		left++;
		right--;
	}
}
