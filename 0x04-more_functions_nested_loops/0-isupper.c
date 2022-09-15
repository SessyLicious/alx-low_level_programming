#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: The input to the function
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char upper;
	int i = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			i = 1;
			break;
		}
	}
	return (i);
}
