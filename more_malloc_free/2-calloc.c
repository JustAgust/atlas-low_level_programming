#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_calloc - allocates memory for an array
 *@nmemb: number of elements in array
 *@size: size of designated type
 *Return: returns pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
       if (ptr == NULL)
       return (NULL);	       
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
