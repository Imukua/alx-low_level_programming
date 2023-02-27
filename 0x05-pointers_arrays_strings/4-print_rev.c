#include "main.h"
/*
 * print_rev -  prints a string, in reverse
 *@s: Variable
 *Return: void
 */
void print_rev(char *s)
{
	int i;
	int len;

	for (i = 0; s[i] != '\0';i++)
		len++;
	while (s[len] >= 0)
	{
		_putchar(s[len]);
		len--;
	}
}



