#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @x: string to use
 * Return: string
 */
char *cap_string(char *x)
{
	char plc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i = 13;
	int j = 0, k;

	while (x[j])
	{
		k = 0;
		while (k < i)
		{
			if ((j == 0 || x[j - 1] == plc[k]) && (x[j] >= 97 && x[j] <= 122))
			{
				x[j] = x[j] - 32;
			}
			k++;
		}
		j++;
	}
	return (x);
}

