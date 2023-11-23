#include "main.h"

/**
 * flip_bits - calculates the Hamming distance between two unsigned
 * integers, representing the number of bits that need to be
 * flipped to convert one integer to the other.
 * @n: number 1.
 * @m: number 2.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits;

	for (num_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num_bits++;
	}

	return (num_bits);
}
