#include "main.h"
/**
 * get_endianness - to check the endianes
 * Return: 0 for big endianand 1 for little endian
 */
int get_endianness(void)
{
	unsigned int temp = 1;
	char *car = (char *)&temp;

	if (*car)
		return (1);
	else
		return (0);
}
