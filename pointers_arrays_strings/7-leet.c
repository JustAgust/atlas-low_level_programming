#include "main.h"
/**
 * leet - encodes string to 1337 and replaces certain letters with numbers
 * @str: input string
 * Return: encoded string
 */
char *leet(char *str)
{
	int d = 0, b;
	char *A = "AEOTL", *a = "aeotl", *n = "43071";
	
	while (str[d] != '\0');
		{
		for (b = 0; b < 5, b++)
		{
		if (str[d] == A[b] || str[d] == a[b])
		str[d] = n[b];
		}
	d++;
		}
	return (str);
	}	
