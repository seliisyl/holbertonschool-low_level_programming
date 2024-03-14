#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - libÃre la mÃmoire alloue pr un dog
 * @d: pointeur vers le dog a libÃrer
 *
 * Descriptio:
 * fonction libÃre la memo alloue dynam pr un chien,
 * et aussi les chaÃnes de caractÃres name et owner
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
