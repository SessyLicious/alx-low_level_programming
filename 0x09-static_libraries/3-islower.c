#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: contains the input to the function
 * Return: a 1 if lowercase character is found
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
