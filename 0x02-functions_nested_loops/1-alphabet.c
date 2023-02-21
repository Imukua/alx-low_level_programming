#include "main.h"
/*
* print_alphabet - print the alphabet in lower case
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
