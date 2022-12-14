#include "main.h"

/**
*  _strcpy - copies the string pointed to by src into dest
*  @dest: destination
*  @src: source
*  Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0, len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

