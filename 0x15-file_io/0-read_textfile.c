#include "main.h"

/**
 * read_textfile - reads the text file then prints the letters
 * @filename: name of the file.
 * @letters:the number of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_rd, num_wr;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	num_rd = read(fd, buffer, letters);
	num_wr = write(STDOUT_FILENO, buffer, num_rd);

	close(fd);

	free(buffer);

	return (num_wr);
}
