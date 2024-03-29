#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - defines a new type with the following elements
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 * Return: no return
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *check_null(char *s);
#endif
