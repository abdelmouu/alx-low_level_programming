#include "main.h"

/**
 * clear_bit - sets the specified bit of an unsigned long integer to 0.
 * at a given index.
 * @n: The pointer to the unsigned long integer 
 * value containing the bit to modify.
 * @index: The index of the bit to set to 0.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int q;

	if (index > 63)
		return (-1);

	q = 1 << index;

	if (*n & q)
		*n ^= q;

	return (1);
}
