#include "main.h"

/**
 * _strlen_recursion - Calculates the number of characters in a string.
 *
 * @s: The string to be measured.
 *
 * Return: The length of the string in characters.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
