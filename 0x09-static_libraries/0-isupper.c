#include "main.h"

/**
 * _isupper - Checks if the given character is uppercase.
 * @c: The input character.
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
