#include "main.h"
/**
 * _atoi - a funtion that converts a string to an integer
 * @s: input string
 * Return: an integer.
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;
	int firstnum = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			(sign = sign * -1);
		}
		else if (*s >= 48 && *s <= 57)
		{
			result = result * 10 + (*s - 48);
			firstnum = 1;
		}
		else if (*s == '+' || *s == ' ')
		{
		}
		else if (firstnum == 1)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
