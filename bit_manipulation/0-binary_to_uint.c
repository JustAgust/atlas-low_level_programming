#include "main.h"

/**
 * binary_to_unit - convert binary to unsigned int
 * @b: points to string of 0 and 1 chars
 * Return: returns converted number or 0 if empty or another number besides 0,1
 */
unsigned int binary_to_uint(const char *b)
{
	long int result = 0, bit;
	int i, j = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	i--;
	for (; i >= 0; i--, j++)
	{
		if (b[i] == '0')
			bit = 0;
		else
			bit = 1;
		result = result + (bit << j);
	}
	return (result);
}
