#include "main.h"
/**
 * _sqrt_recursion - func for natural sqrt only
 * @n: input int
 * Return: if not nat sqrt, return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	{
		return (_sqrt_recursion(n + 1));
	}
}
