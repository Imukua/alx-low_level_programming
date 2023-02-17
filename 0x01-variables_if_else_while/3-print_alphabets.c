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

	for (X = 'a' && Y = 'A'; X <= 'z' && Y <= 'Z' ; X++ && Y++)
	{
		putchar(X);
		putchar(Y);
	}

	putchar('\n');
	return (0);
}
