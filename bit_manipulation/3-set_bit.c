#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a given value
 * @index: value to be set
 * Return: 1 for success, -1 for error
 */
int set_bit(unisgned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
