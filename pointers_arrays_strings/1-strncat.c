#include "main.h"
/**
 * _strncat - does not need to be null if >= n
 * @dest: first string
 * @src: second string
 * @n: cat second string
 * Return: cat string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	if (*src != '\0')
	{
		for (i = 0; i < n; i++)
		{
			dest[j + i] = src[i];
		}
	}
	dest[j + i] = '\0';
	return (dest);
}
