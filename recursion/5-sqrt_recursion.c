#include "main.h"

/**
 * _sqrt_recursion - func for natural sqrt only
 * @n: input int
 * Return: if not nat sqrt, return -1
 */
int _sqrt_recursion(int n)
{
	return (calsq(n, 0));
}

/**
 * calsq - calculates square root with recursion
 * @n: original num
 * @r: answer for square root
 * Rerturn: result
 */
int calsq(int n, int r)
{
	if (n < 0 || r == n)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else if (r * r == n)
		return (r);
	return (calsq(n, r + 1));

}
