#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @d: struct dog to free
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free the memory allocated for the dog's name */
		free(d->name);

		/* Free up memory allocated for the owner */
		free(d->owner);

		/* Free memory allocated for the dog structure */
		free(d);
	}
}
