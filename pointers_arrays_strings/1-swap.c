#include "main.h"
/**
 * void swap_int - swaps values
 * @a: first integer
 * @b: second interger
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
