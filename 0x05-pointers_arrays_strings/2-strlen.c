#include "main.h"
int _strlen(char *s)
/**
 * _strlen - returns the length of a string
 * @s: the string to find the length of
 *
 * Return: the length of the string
 */
{
	int i;
	int counter = 0;

	for (i = 0; i != '\0'; i++)
		counter++;
	return (counter);
}
