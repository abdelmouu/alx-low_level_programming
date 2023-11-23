#include "main.h"

/**
 * get_bit - retrieves the value of a specified
 * bit in an unsigned long integer.
 * @n: The unsigned long integer value containing the bit to retrieve.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the specified bit (0 or 1).
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
