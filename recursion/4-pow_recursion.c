#include "main.h"
/**
 * _pow_recursion - raises to power of
 * @x: input value
 * @y: raises input value to power of
 * Return: value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
