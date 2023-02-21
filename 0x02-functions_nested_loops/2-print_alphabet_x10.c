#include "main.h"

/**
 *  * print_alphabet_x10 - prints 10 times the alphabet,
 *   *  in lowercase, followed by a new line
 *    */
void print_alphabet_x10 (void)
{	int i;
	int times;

	for (times = 0; times < 10; times++)
	{
		for(i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}

}
		
