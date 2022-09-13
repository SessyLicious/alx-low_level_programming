#include <stdio.h>

/**
 * main - print first 50 fibonacci
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int f1 = 0, f2 = 1, sum1;
	float sum2;

	while (1)
	{
		sum1 = f1 + f2;
		if (sum1 > 4000000)
		{
			break;
		}
		if ((sum1 % 2) == 0)
		{
			sum2 += sum1;
		}
		f1 = f2;
		f2 = sum1;
	}
	printf("%.0f\n", sum2);
	return (0);
}

