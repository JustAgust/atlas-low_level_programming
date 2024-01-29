#include "main.h"
/**
 * rev_string - function that reverses the string
 * @s: input string
 */
void rev_string(char *s)
{
	int k = 0, len = 0;
	char swap;

	while (s[len] != '\0')
	{
		len++;
	}

	len--;
	for (; k <= len; k++, len--)
	{
		swap = s[len];
		s[len] = s[k];
		s[k] = swap;
	}
}
