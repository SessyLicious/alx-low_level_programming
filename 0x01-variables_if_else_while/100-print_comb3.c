#include <stdio.h>
/**
 * main - main entry.
 * Description : Prints all combinations of two digits with,
 * and space followed by new line
 * Return: always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; i < 10; i++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
			putchar('\n');
			return (0);
}
