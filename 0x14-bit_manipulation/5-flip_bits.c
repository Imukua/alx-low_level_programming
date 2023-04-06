#include "main.h"
/**
 * flip_bits - returns number of bits required to flip from point n to m
 * @n: first number
 * @m: second number
 * Return: returns number of bits required to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int disp = n ^ m;
	unsigned int tot = 0;

	while (disp)
	{
		tot += disp & 1;
		disp >>= 1;
	}

	return (tot);
}
