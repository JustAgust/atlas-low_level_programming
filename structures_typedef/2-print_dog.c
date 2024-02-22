#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *@d: elements to print unless null
 *Return: no return
 *@s: value to check if null
 */
char *check_null(char *s)
{
	if (s == NULL)
		return "(nil)";
	else
		return (s);
}
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", check_null(d->name));
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", check_null(d->owner));
	}
}


