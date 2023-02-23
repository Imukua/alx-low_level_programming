#include "main.h"
/*
 * int _isupper(int c) - checks if charactr is uppercase
 *
 * Return: always return 0(success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else 
		return (0);

}

