#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string, input to the function
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
