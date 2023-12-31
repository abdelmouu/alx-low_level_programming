#include "main.h"

/**
 * binary_to_uint - converts a binary string representation to
 * an unsigned integer value.
 * @b: The binary string representation.
 *
 * Return: The unsigned integer value represented by the binary string.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int unsigned_int;
	int length, base2;

	if (!b)
		return (0);

	unsigned_int = 0;

	for (length = 0; b[length] != '\0'; length++)
		;
	for (length--, base2 = 1; length >= 0; length--, base2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			unsigned_int += base2;
		}
	}

	return (unsigned_int);
}
