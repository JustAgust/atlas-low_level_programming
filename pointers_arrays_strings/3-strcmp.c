#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: input string
 * @s2: input string
 * Return: returns ASCII values
 */
int _strcmp(char *s1, char *s2)
	{
	int i = 0, diff = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && diff == 0)
	{
		diff = (int)(s1[i]) - (int)(s2[i]);
		i++;
	}
	if (diff == 0)
	{
		if (s1[i] == '\0' && s2[i] != '\0')
			diff = (-1) * (int)(s2[i]);
		else
			diff = (int)(s1[i]);
	}
	return (diff);
}
