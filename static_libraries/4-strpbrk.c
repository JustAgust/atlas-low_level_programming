#include "main.h"
/**
 * _strpbrk - finds first char in string *s1 that matches any char in *s2
 * @s: first inout string
 * @accept: string to be matched
 * Return: returns pointer to matching char, else returns null.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*a == *s)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
