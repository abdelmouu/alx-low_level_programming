#include <stdio.h>
/**
 * main - prints the number of command line arguments passed to it.
 * @argc: the number of command line arguments.
 * @argv: an array that contains the program's command line arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
