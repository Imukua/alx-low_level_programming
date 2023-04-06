#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: const char variable
 * Return: result returned
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sol = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			sol = (sol << 1) + 1;
		else if (b[i]  == '0')
			sol = sol << 1;
		else
			return (0);
	}
	return (sol);
}
