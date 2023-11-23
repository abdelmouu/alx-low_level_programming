#include "main.h"

/**
 * set_bit - sets the specified bit of an unsigned long integer to 1.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit to set to 1.
 *
 * Return: 1 when worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int q;

	if (index > 63)
		return (-1);

	q = 1 << index;
	*n = (*n | q);

	return (1);
}
