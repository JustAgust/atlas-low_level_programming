#include "main.h"
/**
 * reverse_array - reverse content of array
 * @a: array of ints
 * @n: elements in array to be swapped
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, swp;

while (i <= j)
{
	swp = a[i];
	a[i] = a[j];
	a[j] = swp;
	i++;
	j--;
}
}
