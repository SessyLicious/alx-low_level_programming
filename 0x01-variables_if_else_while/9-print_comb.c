#include <stdio.h>
/**
 *  main - main entry.
 *  Description : prints all possible combinations of single digit numbers.
 *  Return: always 0 (success)
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
	       if (i != '9')
		{
			putchar(',');
			putchar(' ');														      }
		++num;
	}
	putchar('\n');
	return (0);
}
