#include"main.h"

/**
 * print_times_table - Prints the times table of the input, from 0
 * @n: it is the input to the function
 */
void print_times_table(int n)
{
	int r, c, i;

	if (n <= 15 && n >= 0)
	{
		for (r = 0; r <= n; r++)
		{
			_putchar(48);
			for (c = 1; c <= n; c++)
			{
				_putchar(',');
				_putchar(' ');
				i = r * c;
				if (i <= 9)
				{
					_putchar(' ');
				}
				if (i <= 99)
				{
					_putchar(' ');
				}
				if (i >= 100)
				{
					_putchar((i / 100) + 48);
					_putchar((i / 10) % 10 + 48);
				}
				else if (i <= 99 && i >= 10)
				{
					_putchar((i / 10) + 48);
				}
				_putchar((i % 10) + 48);
			}
			_putchar('\n');
		}
	}
}




