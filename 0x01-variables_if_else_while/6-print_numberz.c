#include <stdio.h>
#include <ctype.h>
/**
 * main - entry level
 * Description : Prints all single digits of base 10 followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
