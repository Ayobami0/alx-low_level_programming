#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory allocated for the
 * @d struct
 * @d: pointer to dog_t struct
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
