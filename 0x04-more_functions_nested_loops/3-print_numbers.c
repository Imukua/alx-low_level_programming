#include "main.h"
/**
 *print_numbers - checks for checks for a digit (0 through 9).
 *@i: Variable
 *Return: Always 0.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
