#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 * Return: integer.
 */
int _atoi(char *s)
{
	int sn = 1, count  = 0;
	unsigned int rs = 0;

	while (!(s[count] <= '9' && s[count] >= '0') && s[count] != '\0')
	{
		if (s[count] == '-')
		{
			sn *= -1;
		}
		count++;
	}
	while (s[count] <= '9' && (s[count] >= '0' && s[count] != '\0'))
	{
		rs = (rs * 10) + (s[count] - '0');
		count++;
	}
	rs *= sn;
	return (rs);
}

