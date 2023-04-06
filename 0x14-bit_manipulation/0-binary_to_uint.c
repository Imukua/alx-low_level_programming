#include "main.h"
/*
 * binary_to_uint - Function to convert binary to unsigned int
 * @b: const char variable
 * Return: result returned
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sol = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	for (; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			sol = (sol << 1) + 1;
		else if (b[i]  == '0')
			sol = sol << 1;
		else
			return 0;
	}
	return sol;
}
