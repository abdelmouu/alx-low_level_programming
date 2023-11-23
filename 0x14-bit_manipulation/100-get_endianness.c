#include "main.h"

/**
 * get_endianness - determines the endianness of the machine architecture.
 *
 * Return: 0 if the machine is big-endian, 1 if it is little-endian.
 */

int get_endianness(void)
{
	unsigned int unsigned_int;
	char *c;

	unsigned_int = 1;
	c = (char *) &unsigned_int;

	return ((int)*c);
}
