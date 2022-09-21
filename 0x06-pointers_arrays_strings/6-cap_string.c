#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @x: string to use
 * Return: string
 */
char *cap_string(char *x)
{

	int i = 1, j, count;
char a[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};


	if (x[0] > 96 && x[0] < 123)
	{
		x[0] -= 32;
	}

	while (x[i] != '\0')
	{
		if (x[i] > 96 && x[i] < 123)
		{
			j = 0;
			count = 0;
			while (count == 0 && j < 13)
			{
				if (x[i - 1] == x[j])
				{
					count = 1;
				}
				j++;
			}
			if (count == 1)
			{
				s[count] -= 32;
			}
		}
		i++;
	}
	return (x);
}
