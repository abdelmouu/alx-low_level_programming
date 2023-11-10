#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer.
 * @name: the name to print.
 * @f: a pointer to a function that takes a string as input and returns void.
 *
 * Return: none.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
