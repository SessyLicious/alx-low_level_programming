#include"main.h"
/**
 * main - Entry point
 * Description : Prints -putchar
 * Return: Always 0 (success)
 */
int mai (void)
{
	char output[] = "-putchar";
	int ch;
	for (ch = 0; ch < 8; ch++)
	{
		_putchar(output[ch]);
	}
	_putchar('\n');
	return (0);
}
