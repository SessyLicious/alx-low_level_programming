#include <stdio.h>
#include <stdlib.h>

/**
 * main -> this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num = 0, digit = 0, sum = 0;

	while (num < argc)
	{
		while (argv[num][digit])
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
			digit++;
		}
		sum += atoi(argv[num]);
		num++;
	}
	printf("%d\n", sum);
	return (0);
}
