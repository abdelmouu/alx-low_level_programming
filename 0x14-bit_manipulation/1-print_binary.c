#include "main.h"

/**
 * print_binary - prints the binary representation
 * of an unsigned long integer.
 * @n: The unsigned long integer value to be represented in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	for (; n >> 0; n >>= 1)
	{
		_putchar((n & 1) + '0');
	}

	if (n == 0)
	{
		_putchar('0');
	}
}
