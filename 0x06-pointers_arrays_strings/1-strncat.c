#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = 0;
	int len2 = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[len2] != '\0')
	{
		len2++;
	}
	for (i = 0; i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}
	if (len2 < n - 1)
	{
		dest[len] = '\0';
		return (dest);
	}
	else
		return (dest);
}

