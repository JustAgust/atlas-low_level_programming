#include "main.h"
/**
 * _strspn - gets initial segment which consists of specific bytes
 * @s: intial string segment
 * @accept: prefix substring
 * Return: byte number from "s" made of only "accept" bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0' && s[i] != ' ' && s[i] !+ ','; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			count++;
			break;
		}
	}
}
return (count);
}
