#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *main - Entry poin
 *
 *Return: Always 1 (Success)
 */
int main(void)
{
	const char message[] = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";
	const int length = sizeof(message) - 1;
	const int fd = 2;
	
	write(fd, message, length);
	return 1;
}
