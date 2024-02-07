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
	if (x == 0)
	{
		return _pow_recursion(x, y);
	}
}
