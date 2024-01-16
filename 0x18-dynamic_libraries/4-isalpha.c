#include "main.h"

/**
 * _isalpha - Checks if the given character is a letter.
 * @c: The character to check.
 * Return: 1 if the character is a letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
