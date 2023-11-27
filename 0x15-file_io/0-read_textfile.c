#include "main.h"

/**
 * read_textfile - reads the contents of a text file
 * and prints each letter to the console.
 * @filename: The name of the text file to read.
 * @return: The number of letters printed.
 * If the file cannot be opened or read, returns 0.
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
	if (!buffer)
		return (0);

	num_rd = read(fd, buffer, letters);
	num_wr = write(STDOUT_FILENO, buffer, num_rd);

	close(fd);

	free(buffer);

	return (num_wr);
}
