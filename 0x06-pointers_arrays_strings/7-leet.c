#include "main.h"

/**
 * leet - encodes a string into 1337
 * @x: param to the function
 * Return: the encoded string.
 */
char *leet(char *x)
{
	int i = 0, j = 0;
	char array_leet[] = {'4', '3', '1', '0', '7'};
	char array_up[] = {'A', 'E', 'L', 'O', 'T'};
	char array_low[] = {'a', 'e', 'l', 'o', 't'};

	while (x[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (x[i] == array_low[j] || x[i] == array_up[j])
			{
				x[i] = array_leet[j];
			}
		}
		i++;
	}
	return (x);
}
