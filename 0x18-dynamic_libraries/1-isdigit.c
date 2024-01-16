#include "main.h"

/**
 * _isdigit - Checks if the given character is a decimal digit.
 * @c: The input character.
 * Return: 1 if the character is a decimal digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
