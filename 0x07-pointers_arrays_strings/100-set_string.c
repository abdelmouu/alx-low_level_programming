#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: A pointer to a pointer to a char (double pointer)
 * @to: A pointer to a char
 * Return: no return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
