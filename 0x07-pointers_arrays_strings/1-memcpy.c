#include "main.h"
/**
 * _memcpy function, which takes three arguments.
 * dest: pointer to the destination memory erea where the data will be copied.
 * src: pointer to the source memory area where the data will be copied.
 * n: an unsugnerd int specifying the nmbr of bytes to copy 
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);
				
	return (dest);
}
