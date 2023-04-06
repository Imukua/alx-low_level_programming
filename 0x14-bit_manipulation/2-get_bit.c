#include "main.h"
/*
 * get_bit - returns the value of a bit at index provided
 * @n: the number to obtain the bit from
 * @index: the index of the bit to get
 *
 * Return: value of the bit at given index or -1 if any error occurrs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}

