#include "main.h"
/*
 * print_alphabet_x10 - print the alphabet in lowe case ten times
 * Return: 0 always success
 */
void print_alphabet_x10 (void)
{	int i;
	int times;

	for (times = 0; times < 10; times++)
	{
		for(i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
	}

	putchar('\n');
}
		
