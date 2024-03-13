#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - alloue m√©moire pr un array, en utilisabt malloc
 * @nmemb: nbr d'√l√©ments.
 * @size: taille de l'√l√©ment;
 * Return: renvoie un ptr vers un arrays d'√l√©ment
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	/* V√©rifier si nmemb ou size est √©ge a 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allouer de la m√©moire pour le tabeau */
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	/* init chq √l√met du tableau a 0 */
	for (i = 0; i < nmemb * size; i++)
		*(array + (i * size)) = 0;
	return (array);
}
