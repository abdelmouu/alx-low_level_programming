#include <stdio.h>
#include "main.h"

/**
  * main - Entry point for the file copying program.
  * @argc: The argument count.
  * @argv: The argument vector.
  * Return: 0 on success, exit codes for errors.
  */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
  * copy_file - Copies the contents of one file to another.
  * @src: The name of the source file.
  * @dest: The name of the destination file.
  * Return: void
  */
void copy_file(const char *src, const char *dest)
{
	int orgnl_file_descr;
	int target_file_descr;
	int readed;
	char buffer[1024];

	orgnl_file_descr = open(src, O_RDONLY);
	if (!src || orgnl_file_descr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	target_file_descr = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((readed = read(orgnl_file_descr, buffer, 1024)) > 0)
	{
		if (write(target_file_descr, buffer, readed)
									!= readed || target_file_descr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(orgnl_file_descr) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", orgnl_file_descr);
		exit(100);
	}

	if (close(target_file_descr) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", target_file_descr);
		exit(100);
	}
}
