#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int mins, hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((mins / 10) + 48);
			_putchar((mins % 10) + 48);
			_putchar('\n');
		}
	}
}
