#include "main.h"
/**
 * leet - encodes string to 1337 and replaces certain letters with numbers
 * @str: input string
 * Return: encoded string
 */
char *leet(char *str)
{
	int a = 0, b;
	char *A = "AEOTL", *a = "aeotl", *n = "43071";
	{
		while (str[a] != '\0');
		{
		for (b = 0; b < 5, b++)
		{
		if (str[a] == A[b] || str[a] == a[b])
		str[a] = n[b];
		}
	a++;
		}
	return (str);
	}	
