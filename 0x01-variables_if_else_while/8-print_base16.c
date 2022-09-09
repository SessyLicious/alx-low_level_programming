#include <stdio.h>
/**
 *  main - prints all numbers of base 16.
 *  Description:Prints all single digits of base 10 followed by new line
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	num = 'a';
	while (num <= 'f')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
