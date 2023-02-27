#include "main.h"
int _strlen(char *s)
{
	int i;
	int counter = 0;

	for (i = 0; i <= *s; i++)
		counter++;
	return (counter);
}
