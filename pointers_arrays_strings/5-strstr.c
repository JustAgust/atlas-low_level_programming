#include "main.h"
/**
 * _strstr - finds first occurance between two substrings
 * @haystack: main string to be examined
 * @needle: sub string to be searched
 * Return: returns a pointer to beginning of substring or NULL if string not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	for (; *haystack; haystack++)
	{
		h = haystack;
		n = needle;
		for (; *h && *n && (*h == *n); ++h, ++n);
		if (!*n)
			return (haystack);
	}
	return (NULL);
}
