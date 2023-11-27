#include "main.h"

/**
 * append_text_to_file - appends the specified text content
 * to the end of an existing file.
 * @filename: The name of the file to append the text to.
 * @text_content: The text content to append to the file.
 *
 * Return: 1 file exists. -1 if the fails does not exist or fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, num_letters, rwr;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		rwr = write(file_d, text_content, num_letters);

		if (rwr == -1)
			return (-1);
	}

	close(file_d);

	return (1);
}
