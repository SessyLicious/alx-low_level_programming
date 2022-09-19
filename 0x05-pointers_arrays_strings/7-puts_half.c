#include "main.h"
#include <string.h>

/**
* puts_half - prints half of a string.
* @str: string input to the function
* Return: no return.
*/
void puts_half(char *str)
{
	int i, j, k;

	i = strlen(str);
	if (i % 2 == 1)
	{
		j = i / 2 + 1;
	}
	else
	{
		j = i / 2;
	}
	k = j;
	while (k < i)
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
