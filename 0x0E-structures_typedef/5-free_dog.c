#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory for the dog struct
 * @d: pointer to memory to be freed
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
