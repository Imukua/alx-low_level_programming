#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints a valid key for a given username.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char key[7], *crode;
	int len = strlen(argv[1]), i, temp;

	crode = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (len ^ 59) & 63;
	key[0] = crode[temp];

	temp = 0;
	for (i = 0; i < len; i++)
		temp += argv[1][i];
	key[1] = crode[(temp ^ 79) & 63];

	temp = 1;
	for (i = 0; i < len; i++)
		temp *= argv[1][i];
	key[2] = crode[(temp ^ 85) & 63];

	temp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > temp)
			temp = argv[1][i];
	}
	srand(temp ^ 14);
	key[3] = crode[rand() & 63];

	temp = 0;
	for (i = 0; i < len; i++)
		temp += (argv[1][i] * argv[1][i]);
	key[4] = crode[(temp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		temp = rand();
	key[5] = crode[(temp ^ 229) & 63];

	key[6] = '\0';
	printf("%s\n", key);
	return (0);
}

