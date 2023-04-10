/**
 * create_file - creates a file and writes text content to it
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int file_de, return_v;
    ssize_t size = 0;

    if (filename == NULL)
        return (-1);

    file_de = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
    if (file_de == -1)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[size] != '\0')
            size++;

        return_v = write(file_de, text_content, size);
        if (return_v == -1)
            return (-1);
    }

    close(file_de);

    return (1);
}

