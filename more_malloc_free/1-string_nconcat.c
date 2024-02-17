#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatonate two strings
 * @s1: first string
 * @s2: second string
 * @n: first bytes in s2 to be appended to s1
 * Return: pointer pointing to newly allocate space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *cc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	cc = malloc(sizeof(char) * (i + n + 1));
	if (cc == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		cc[i] = s1[i];
	for (j = i; j < (n + i) && s2[j - i] != '\0'; j++)
		cc[j] = s2[j - i];
	cc[j] = '\0';
	return (cc);
}
