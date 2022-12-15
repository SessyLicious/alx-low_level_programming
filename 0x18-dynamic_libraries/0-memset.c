#include "main.h"
#include <string.h>

/**
 * _memset - this memory set function
 * @s: pointer block of memory to fill
 * @b: value to set
 * @n: bytes of the memory
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
