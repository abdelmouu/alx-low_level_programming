#include "main.h"

/**
 * create_file - creates a new file and writes
 * the specified text content to it.
 * @filename: The name of the file to create.
 * @text_content: content writed in the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, num_letters, rw;

	if (!filename)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;

	rw = write(file_d, text_content, num_letters);

	if (rw == -1)
		return (-1);

	close(file_d);

	return (1);
}
