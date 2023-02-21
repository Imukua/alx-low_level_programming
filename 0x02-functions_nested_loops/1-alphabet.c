#include "main.h"
/*
 * print_alphabet - main function
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
