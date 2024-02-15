#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates array of chars intialized by specific char
 * @size: array size
 * @c: specific char
 * Return: returns pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if(size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	if(ar == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
