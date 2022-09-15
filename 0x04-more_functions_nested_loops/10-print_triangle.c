#include"main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i = 0, j, k = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < k)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			k--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
