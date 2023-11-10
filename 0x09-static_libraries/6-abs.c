#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @i: input number.
 *
 * Return: absolute value.
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
