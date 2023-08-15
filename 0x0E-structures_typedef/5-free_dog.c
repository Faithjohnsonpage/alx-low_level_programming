#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function frees dog
 * @d: struct dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(dog->name);
		free(dog->owner);
		free(d);
	}
}
