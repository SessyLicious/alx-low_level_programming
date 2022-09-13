#include"main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int r, c, i;

	for (r = 0; r <= 9; r++)
	{
		_putchar(48);
		for (c = 1; c <= 9; c++)
		{
			_putchar(',');
			_putchar(' ');
			i = r * c;
			if (i <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
