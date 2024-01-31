#include "main.h"
/**
 * _strcat - concat string
 * @dest: string added to
 * @src: appending string
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		
	}
	dest[i] = '\0';
	return (dest);
}
