#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory with a check, normal proc termination
 * @b: sizeof
 * Return: returns address
 */
void *malloc_checked(unsigned int b);
{
	int *i;

	i = malloc(b);
	if (i == 0)
	{
		free(i);
		exit(98);
	}
	return (i);
}
