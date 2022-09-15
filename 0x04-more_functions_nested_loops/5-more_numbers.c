#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int counter = 0, num;

	while (counter < 10)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + 48);
			}
			_putchar((num % 10) + 48);
		}
		_putchar('\n');
		counter++;
	}
}
