#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns sum of all param
 * @n: args to be fed in
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	else
		return (sum_them_all);
}
