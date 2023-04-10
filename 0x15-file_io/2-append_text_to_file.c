#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	int ret_val = 1;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	if (text_content != NULL)
	{
		if (fputs(text_content, file) == EOF)
			ret_val = -1;
	}

	if (fclose(file) == EOF)
		ret_val = -1;

	return (ret_val);
}

