#include "main.h"

/**
 * rev_string - reverse string
 * @s: the string to be reversed.
 * Return: void
 */
void rev_string(char *s)
{
	int len, j, i;
	char first, last;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	j = len - 1;
	i = 0;

	while (j > i)
	{
		first = s[i];
		last = s[j];
		s[i] = last;
		s[j] = first;
		j--;
		i++;
	}
}
