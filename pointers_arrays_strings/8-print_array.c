#include "main.h"
/**
 * print_array - prints elements of an array
 * @a: interger for array
 * @n: elements in the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			_putchar("%d, ", a[i]);
		else
			_putchar("%d", a[i]);
	}
<<<<<<< HEAD
	printf("\n");
=======
	_putchar('\n');
>>>>>>> parent of 25bc119 (8-print_array.c)
}
