#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dogs? get me 2
 * @d: points to the type dog_t
 *
 * Return: a heap of strays
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
