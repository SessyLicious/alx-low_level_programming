#include"main.h"
#include <stdio.h>
/**
 * main - print first 50 fibonacci
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter;
	long int f1 = 0, f2 = 1, sum;

	for (counter = 0; counter < 50; counter++)
	{
		sum = f1 + f2;
		printf("%lu", sum);
		f1 = f2;
		f2 = sum;
		if (counter == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}

