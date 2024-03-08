#include "main.h"
/**
 * print_rev - prints string in rev
 * @s: string input
 */
void print_rev(char *s)
{
	int r = 0;

	while (*s != '\0')
	{
		r++;
		s++;
	}
	r = r - 1;
	while (r >= 0)
	{
		r--;
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
