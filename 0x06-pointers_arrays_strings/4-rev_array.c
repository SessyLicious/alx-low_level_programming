#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, j, temp;

	j = n - 1;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
		i++;
	}
}
