#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers, from `min` to `max`, inclusive.
 * @min: the minimum value.
 * @max: the maximum value.
 *
 * Return: a pointer to the newly created array, or NULL on error.
 * If `max` is less than `min`, the function returns NULL.
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}
