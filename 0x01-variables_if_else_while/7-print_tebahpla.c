#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 * Description:Program to print alphabet letters in reverse + \n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
