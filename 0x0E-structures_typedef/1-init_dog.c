#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function to initialize the structur
 * @d: pointer to memory to initialize the struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age  = age;
		d->owner = owner;
	}
}
