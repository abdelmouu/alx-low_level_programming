#include "main.h"

/**
 * _strstr - locates a substring within a string.
 * @haystack: the main string to search in.
 * @needle: the substring to search for.
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *start = haystack;
        while (*haystack && *needle && *haystack == *needle)
        {
            haystack++;
            needle++;
        }

        if (!*needle) 
            return start;

        haystack = start + 1; 
    }

    return NULL; 
}
