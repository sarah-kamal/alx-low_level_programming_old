#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a struct dog
 * @d: struct dog to free
 */
void free_dog(dog_t *d)
{
	char *c;

	if (d)
	{
		if (d->name)
		{
			c = d->name;
			free(c);
		}
		if (d->owner)
		{
			c = d->owner;
			free(c);
		}
		free(d);
	}
}
