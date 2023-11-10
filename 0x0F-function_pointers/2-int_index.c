#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array. 
 * @array: the integer array.
 * @size: the size of the array.
 * @cmp: pointer to the function to compare values.
 * 
 * Return: the index of the first element in the array for which the cmp
 * function does not return 0, or -1 if no elements match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
