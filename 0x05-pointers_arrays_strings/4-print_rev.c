#include "main.h"

/**
 * print_rev - printing a string in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
	}
	for (i = n - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	_putchar('\n');
}
