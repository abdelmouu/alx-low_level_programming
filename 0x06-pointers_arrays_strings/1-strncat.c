#include "main.h"
/**
 * _strncat - Appends a portion of a string to another string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of bytes to append from the source string.
 * Return: A pointer to the destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
