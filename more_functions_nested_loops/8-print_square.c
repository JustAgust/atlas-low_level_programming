#include "main.h"
/**
 * print_square - print a square
 * @size: size of square
 * Return: zero
 */
void print_square(int size)
{
	int x = 0, z;

	if (size > 0)
	{
		do
		{
			z = 0;
			while (z < size){
				_putchar('#');
				z++;
			}
			_putchar('\n');
			x++;
		} while (x < size);
	}
	else
		_putchar('\n');
}
