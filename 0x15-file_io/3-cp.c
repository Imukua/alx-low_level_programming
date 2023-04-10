#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point function
 * @argc: number of command-line arguments
 * @argv: array containing the command-line arguments
 * Return: 0 on success, another value otherwise
 */
int main(int argc, char **argv)
{
    int fdf, fdt, retw, retr;
    char buf[1024];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fdf = open(argv[1], O_RDONLY);
    if (fdf == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    fdt = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
    if (fdt == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    while ((retr = read(fdf, buf, 1024)) > 0)
    {
        retw = write(fdt, buf, retr);
        if (retw != retr)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(fdf);
            close(fdt);
            exit(99);
        }
    }

    if (retr == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close(fdf);
        close(fdt);
        exit(98);
    }

    retr = close(fdf);
    if (retr == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf);
        exit(100);
    }

    retr = close(fdt);
    if (retr == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdt);
        exit(100);
    }

    return (0);
}
