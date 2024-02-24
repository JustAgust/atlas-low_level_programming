#include "function_pointers.h"
/**
 *
 *
 *
 */
void array_iteration(int *array, size_t size, void (*action)(int))
{
	int i;
	for (i = 0; i < size; i++)
		action(array[i]);
}
