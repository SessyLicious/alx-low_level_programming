#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: input to the function
 * Return: 1 if it is a letter
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
