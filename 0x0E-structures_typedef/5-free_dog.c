#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @d: The dog to br freed.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
