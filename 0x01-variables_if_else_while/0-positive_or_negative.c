#include <stdlib.h>
#include <time.h>
/**
 * main - Main function
 *
 * Return: aways 0 (success)
 */
int main(void)
{	
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) 
	{
		printf("%d is Positive", n);

	}

	else if (n==0)
	{
		printf("%d is zero", n);
	
	}
	else if (n<0)
	{
		printf("%d is Negative", n);
	
	}
	

	return (0);
}

