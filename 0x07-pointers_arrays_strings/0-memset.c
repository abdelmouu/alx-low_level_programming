#include "main.h"

/**
 * _memset - Sets memory to a constant byte value.
 *
 * @s: The memory area to be filled.
 * @b: The constant byte value to fill the memory with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
