#include "main.h"
/**
 * flip_bits - calculates bits to flip to get from one number to another number
 * @n: first input number to be converted
 * @m: second input number to be converted
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	if (x == 0)
		return (0);
	while (x > 0)
	{
		x = x & (x - 1);
		count++;
	}
	return (count);
}
