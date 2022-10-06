#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *             from min to max, inclusive
 * @min: minimum value.
 * @max: maximum value.
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int i, l;
	int *s;

	if (min > max)
	{
		return (NULL);
	}
	l = max - min + 1;
	s = malloc(sizeof(int) * l);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++, min++)
	{
		s[i] = min;
	}
	return (s);
}
