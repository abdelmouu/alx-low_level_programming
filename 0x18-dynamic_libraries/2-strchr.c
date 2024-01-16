#include "main.h"
/**
 * _strchr - finds the first occurrence of a character in a string
 * @str: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character or NULL if it is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
