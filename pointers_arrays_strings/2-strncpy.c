#include "main.h"
/**
 * _strncpy - copies string without nullbyte
 * @dest: string to be replaced
 * @src: string that will be copied
 * @n: bytes to be used
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (n > i && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
