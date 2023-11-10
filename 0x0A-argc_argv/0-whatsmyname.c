#include <stdio.h>
/**
 * main - prints the program's name, followed by a newline.
 * @argc: the number of command line arguments.
 * @argv: an array that contains the program's command line arguments.
 * Return: 0 on success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
