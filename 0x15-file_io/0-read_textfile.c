#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: pointer to the name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t feud, soma, andika;
    char *buffee;

    buffee = malloc(letters);
    if (buffee == NULL)
        return (0);

    if (filename == NULL)
        return (0);

    feud = open(filename, O_RDONLY);
    if (feud == -1)
    {
        free(buffee);
        return (0);
    }

    soma = read(feud, buffee, letters);

    andika = write(STDOUT_FILENO, buffee, soma);

    close(feud);
    free(buffee);

    if (andika != soma)
        return (0);

    return (andika);
}

