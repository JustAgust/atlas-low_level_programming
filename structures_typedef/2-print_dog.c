#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *check_null - checks to see if null
 *@s: value to check if null
 *Return: returns null
 */
char *check_null(char *s)
{
	if (s == NULL)
		return ("(nil)");
	else
		return (s);
}
/**
 * print_dog - prints elements of d
 * @d: elements to print
 * Return: returns nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", check_null(d->name));
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", check_null(d->owner));
	}
}


