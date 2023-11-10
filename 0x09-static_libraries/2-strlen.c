#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: The input string.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
