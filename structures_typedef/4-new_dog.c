#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog structure
 * @name: new dog name
 * @age: new age for dog
 * @owner: new owner name
 * Return: returns a pointer, new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int n = 0, o = 0;
	dog_t *ndog;

	while (name[n])
		n++;
	while (owner[o])
		o++;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return (NULL);
	}

	ndog->name = malloc(sizeof(char) * (n + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog->owner = malloc(sizeof(char) * (o + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	for (int i = 0; i <= n; i++)
		ndog->name[i] = name[i];

	ndog->age = age;

	for (int i = 0; i <= o; i++)
		ndog->owner[i] = owner[i];

	return (ndog);
}

