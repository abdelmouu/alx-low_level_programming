#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies a string, including the terminating null byte,
 * from the source string to the destination string.
 * @dest: the destination string.
 * @src: the source string.
 * Return: a pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
