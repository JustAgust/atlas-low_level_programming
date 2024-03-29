#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the diagonal sum of two
 * @a: square matrix
 * @size: the size of the square
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
			sum1 += a[i];
		if ((i != 0) && (i % (size - 1) == 0) && (i != size * size - 1))
			sum2 += a[i];
	}
	printf("%ld, %ld", sum1, sum2);
	printf("\n");
}
