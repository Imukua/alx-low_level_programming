#include "main.h"
/**
 * create_file - Creates a file and writeos text_content to it.
 * @filename: Name of the file to be created
 * @text_content: string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, ret_val, count;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count]; count++)
			;

		ret_val = write(file_d, text_content, count);
		if (ret_val == -1)
		{
			close(file_d);
			return (-1);
		}
	}

	close(file_d);

	return (1);
}

