#include <stdio.h>
/**
 * main - Main function
 *
 * Return: always success
 */
int main(void)
{
	char X;
	char Y;

	for (X = 'a'; X <= 'z'; X++)
	{
		putchar(X);
	}
	for (X = 'A'; X <= 'Z'; X++)
	{
		putchar(Y);
	}

	putchar('\n');
	return (0);
}
