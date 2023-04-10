#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters to print
 * Return: If the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rea_d, ope_n, writ_e;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	ope_n = open(filename, O_RDONLY);
	rea_d = read(ope_n, buffer, letters);
	writ_e = write(STDOUT_FILENO, buffer, rea_d);

	if (ope_n == -1 || rea_d == -1 || writ_e == -1 || writ_e != rea_d)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(ope_n);

	return (writ_e);
}
