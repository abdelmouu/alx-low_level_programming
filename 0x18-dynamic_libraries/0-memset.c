#include "main.h"
/**
 * _memset - Fills a memory area with a constant byte.
 * @dest: The memory area to fill.
 * @value: The constant byte to fill with.
 * @count: The number of bytes to fill.
 * Return: A pointer to the filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
