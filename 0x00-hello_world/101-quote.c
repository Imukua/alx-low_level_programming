#include <unistd.h>

/**
 *main - entry point of the program
 *
 *Return: Always 1 (error)
 */
int main(void)
{
	const char message[] = "and that piece of art is useful\" - "
		"Dora Korpar, 2015-10-19\n";
	const int length = sizeof(message) - 1;
	const int fd = 2;

	write(fd, message, length);
	return (1);
}
