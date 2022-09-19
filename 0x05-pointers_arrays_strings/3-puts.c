#include "main.h"

/**
 * _puts - prints string
 * @str: string, input to the function
 * Return: void
 */
void _puts(char *str)
{
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
