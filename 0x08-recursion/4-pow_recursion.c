#include "main.h"

/**
 * pow_recursion - power recursion.
 * @x: integer
 * @y: integer
 * Return: the result of x raised by y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 0)
		return (1);
	return x * _pow_recursion(x, y - 1);
}
