#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: input string
 * Return: the pointer to dest
 */
char *rot13(char *str)
{
	int check = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + check) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(str + check) == alphabet[i])
			{
				*(str + check) = rot13[i];
				break;
			}
		}
		check++;
	}
	return (str);
}
