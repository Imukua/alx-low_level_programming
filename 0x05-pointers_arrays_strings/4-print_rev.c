#include "main.h"
/*
 * print_rev -  prints a string, in reverse
 *@s: Variable
 *Return: void
 */
void print_rev(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0';i++)
		len++;
	len = len - 1
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}



