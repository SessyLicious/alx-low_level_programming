#include "main.h"

/**
 * print_line - print a straight line
 * @n: Input to the function
 * Return: always 0 (success)
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
		_putchar('\n');
}
