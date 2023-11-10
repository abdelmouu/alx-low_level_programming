#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a `struct dog` variable from memory.
 * @d: the `struct dog` variable to free.
 *
 * Return: none.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
