#include "main.h"
/**
 * _strchr - locate char in string
 * @s: input string
 * @c: character to find!
 * Return: pointer upon first occurance
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
