#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: Variable
 * Return: always 0 (success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c < '10')
		return (1);
	else
		return (0);
}
