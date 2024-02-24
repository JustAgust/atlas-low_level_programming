#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *op_add - returns sum of two ints
 *@a: first int
 *@b: second int
 *Return: returns sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *
 *
 *
 *
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *
 *
 *
 *
 */
int op_mul(int a, int b)
{
        return (a * b);
}
/**
 *
 *
 *
 *
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *
 *
 *
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
