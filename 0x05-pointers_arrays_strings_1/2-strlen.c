#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string to find the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
		counter++;
	return (counter);
}
