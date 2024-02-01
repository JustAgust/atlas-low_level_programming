#include "main.h"
/**
 * string_toupper - turns lower case char into upper case char
 * @str: input string
 * Return: all upper case
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] >= 122)
			str[i] = str[i] - 32;
		i++
	}
	return (str);
}
