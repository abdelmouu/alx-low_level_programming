#include "main.h"
/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 * @s: The input string.
 * Return: A pointer to the converted string.
 */

char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}

	return (s);
}
