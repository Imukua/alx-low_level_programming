#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at given index
 * @n: points to number to modify
 * @index: index of bit to set
 * Return: 1 if success, or -1 if error occurrs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n |= (1 << index);

	return (1);
}
