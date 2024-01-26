#include "main.h"

/**
 * int _strlen - returns string leght
 * @s: sting length parameter
 * Return: sting lenth value
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
		{
			len++;
			s++;
		}
		return (len);
}

