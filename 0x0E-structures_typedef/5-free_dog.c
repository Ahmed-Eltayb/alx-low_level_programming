#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs struct
 * @d: input struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name)
	{
		free(d->name);
	}
	if (d->owner)
	{
		free(d->owner);
	}
	free(d);
}
