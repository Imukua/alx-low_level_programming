#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to append to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int o_file, w_file, count = 0;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL)
    {
        for (count = 0; text_content[count];)
            count++;
    }

    o_file = open(filename, O_WRONLY | O_APPEND);
    w_file = write(o_file, text_content, count);

    if (o_file == -1 || w_file == -1)
        return (-1);

    close(o_file);

    return (1);
}
