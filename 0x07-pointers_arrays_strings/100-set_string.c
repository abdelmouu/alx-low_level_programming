#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 *
 * @s: A double pointer to a char.
 * @to: A pointer to a char.
 *
 * Return: None.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
