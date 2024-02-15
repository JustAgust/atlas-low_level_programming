#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: failure NULL, otherwise concat
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[1] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	k = s1 + s2 + 1;
	con = malloc(sizeof(char) * k);
	if (con == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		con[k] = i[k];
	for (j = 0; s2[j] != '\0'; j++)
		con[k + j] = s2[j];

	return (con);
}
