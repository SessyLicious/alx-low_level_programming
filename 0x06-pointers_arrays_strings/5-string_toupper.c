#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: input string
 * Return: the pointer to dest
 */
char *string_toupper(char *x)
{
	int count = 0;

	while (x[count])
	{
		if (x[count] >= 97 && x[count] <= 122)
		{
			x[count] = x[count] - 32;
		}
		count++;
	}
	return (x);
}
