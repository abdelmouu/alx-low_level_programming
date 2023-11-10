#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string.
 * @str: the string to duplicate.
 *
 * Return: a pointer to a newly allocated string, or NULL on error.
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strout = (char *)malloc(sizeof(char) * (i + 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strout[j] = str[j];

	return (strout);
}
