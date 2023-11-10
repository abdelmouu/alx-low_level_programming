#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory and checks if it succeeds.
 * @b: the number of bytes to allocate.
 *
 * Return: a pointer to the allocated memory, or NULL on error.
 * If malloc fails, the status value is set to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
