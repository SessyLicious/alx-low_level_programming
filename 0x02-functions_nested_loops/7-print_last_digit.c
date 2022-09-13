#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: is the input to the function
 * Return: n
 */
int print_last_digit(int n)
{
	int lastnum = n % 10;

	if (n < 0)
	{
		lastnum = lastnum * -1;
	}
	else
	{
		lastnum = n % 10;
	}
	_putchar(lastnum + '0');
	return (lastnum);
}
