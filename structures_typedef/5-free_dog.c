#include "main.h"
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog_t structure to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL) /* si 'd' est NULL, ne rien faire */
		return;

	if (d->name != NULL) /* si 'name' possède une info, on free */
		free(d->name);

	if (d->owner != NULL) /* si 'owner' possède une info, on free */
		free(d->owner);

	free(d); /* on free la structure après avoir libéré ses membres */
}
