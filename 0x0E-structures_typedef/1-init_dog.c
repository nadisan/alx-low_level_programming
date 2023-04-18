#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: pointer to elements of struct dog
 * @name: pointer to string
 * @age: integer
 * @owner: pointer to string
 * Return: elements of struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit(0);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
