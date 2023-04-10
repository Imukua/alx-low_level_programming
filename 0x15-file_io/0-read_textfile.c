#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed, 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
  int feud, soma, andika;
  char *buffee;

  if (filename == NULL)
    return (0);

  buffee = malloc(sizeof(char) * letters);
  if (buffee == NULL)
    return (0);

  feud = open(filename, O_RDONLY);
  if (feud == -1)
  {
    free(buffee);
    return (0);
  }

  soma = read(feud, buffee, letters);
  if (soma == -1)
  {
    free(buffee);
    close(feud);
    return (0);
  }

  andika = write(STDOUT_FILENO, buffee, soma);
  if (andika == -1 || andika != soma)
  {
    free(buffee);
    close(feud);
    return (0);
  }

  free(buffee);
  close(feud);

  return (andika);
}

