#include <stdio.h>
#include <ctype.h>
/**
 * main - Program to print the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter)
	}
	putchar('\n');
	return (0);
}
