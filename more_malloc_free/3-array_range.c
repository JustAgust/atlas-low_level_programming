#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: max number
 * Return: returns pointer to the new array
 */
int *array_range(int min, int max)
{
	int i;
	int *a;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (min - max + 1));
	if (a == 0)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		a[i - min] = i;
	}
	return (a);
}
