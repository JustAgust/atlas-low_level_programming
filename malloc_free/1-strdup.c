#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - points to new alloc which contains copy of str
 * @str: contains copy of string
 * Return: returns pointer
 */
char *_strdup(char *str)
{
	int i, s = 0;
	char *dbl;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s++;
	s++;
	dbl = malloc(sizeof(char) * s);
	if (dbl == NULL)
	return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dbl[i] = str[i];
	return (dbl);
}
