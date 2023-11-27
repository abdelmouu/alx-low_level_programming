#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if the specified input and output files
 * can be opened. If either file cannot be opened,
 * it exits the program with an appropriate error message.
 * @file_from: The name of the input file to be opened.
 * @file_to: The name of the output file to be opened.
 * @argv: the arguments vector.
 * Return: void.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - entry point for the file copying program.
 * @argc: argument count
 * @argv: arguments vector.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	int err_close;
	ssize_t num_chars, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);
	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(file_from, buffer, 1024);
		if (num_chars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buffer, num_chars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}

