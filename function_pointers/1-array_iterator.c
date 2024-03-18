#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute font� sur chq elemt du array
 * @array: array pour iterer
 * @size: la taille du tableau
 * @action: fonct� a �xécute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	/* verifie array et action sont pas des pointeur nul */
	if (array && action)

		for (i = 0; i < (int)size; i++)
			/* iterant a travers chq elemt du array */
			/* appel fonct�action sur chq �l�mt d'array */
			action(array[i]);
}
