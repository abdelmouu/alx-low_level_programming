#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 * @array: the input integer array.
 * @size: the size of the array.
 * @action: a pointer to the function to be executed on each element of the array.
 *
 * Return: none.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
