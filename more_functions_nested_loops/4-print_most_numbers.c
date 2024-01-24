#include "main.h"
/**
 * print_most_numbers - prints nums 0 to 9 except 2 and 4 with new line
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int t;

	for (t = 0; t <= 9; t++)
	{
		if (t != 2, t != 4)
			_putchar(t + '0');
	}
		_putchar('\n');
}
