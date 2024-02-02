#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: first input string
 * @b: second input string
 * @n:unsigned int
 * Return: returns pointer in area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[b] = n;
	}
	return (s);
}