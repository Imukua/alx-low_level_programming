#include "main.h"
/**
 * _isupper - checks for uppercase character
 *@c: Variable
 *Return: always return 0(success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else 
		return (0);

}

