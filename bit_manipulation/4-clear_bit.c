#include "main.h"

/**
 * clear_bit - sets the valueof a bit to zero at given index
 * @n: value given
 * @index: value to be set to zero
 * Return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
