#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block.
 * @ptr: the pointer to the memory previously allocated.
 * @old_size: the size, in bytes, of the allocated space of `ptr`.
 * @new_size: the new size, in bytes, of the new memory block.
 *
 * Return: a pointer to the reallocated memory block, or NULL on error.
 * If `new_size` is equal to `old_size`, the original memory block is returned without any changes.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
