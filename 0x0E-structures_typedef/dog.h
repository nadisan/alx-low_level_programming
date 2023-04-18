
#ifndef _DOG_
#define _DOG_

/**
 *struct dog - that has name, age and owner
 *@name: string
 *@age:	integer
 *@owner: string
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
