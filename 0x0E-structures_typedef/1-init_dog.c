#include <stdio.h>

struct Dog
{
	char *name
	float age
	char *owner
};

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct Dog *d;
	dog = malloc(sizeof(struct Dog));
	if (dog == NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
		return (d);
	}
}
