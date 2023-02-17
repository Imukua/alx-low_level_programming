#include <stdio.h>
/**
 *  * main - Main function
 *   *
 *    * Return: always success
 *
 */
int main(void)
{
	char X;

	for (X = 'a'; X <= 'z'; X++)
	{
		if (X != 'e' && X != 'q')
			putchar(X);
	}
	putchar('\n');
	return (0);
}
