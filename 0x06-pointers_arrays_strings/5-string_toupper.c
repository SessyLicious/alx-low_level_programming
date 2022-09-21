#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: input string
 * Return: the pointer to dest
 */
char *string_toupper(char *x)
{
	int count = 0;

	while (x[count] != '\0')
	{
		if (x[count] > 96 && x[count] < 123)
		{
			x[count] = -= 32;
		}
		count++;
	}
	return (x);
}
