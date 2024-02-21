#include "dog.h"
/**
 * init_dog - initialize var type struct dog
 * @d: pointer to structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
