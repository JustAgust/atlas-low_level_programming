#include "main.h"
/**
 * print_rev - prints string in rev
 * @s: string input
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	i = i - 1;
	while (i >= 0)
	{
		i--;
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
