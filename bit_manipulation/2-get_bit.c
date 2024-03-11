#include "main.h"

/**
 * get_bit - returns value of given bit at index
 * @index: is index
 * Return: returns value of index or -1 if error
 */
int get_bit(unsigned long int, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
