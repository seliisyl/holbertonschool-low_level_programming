#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute fontÂ sur chq elemt du array
 * @array: array pour iterer
 * @size: la taille du tableau
 * @action: fonctÂ a ÃxÃ©cute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	/* verifie array et action sont pas des pointeur nul */
	if (array && action)

		for (i = 0; i < (int)size; i++)
			/* iterant a travers chq elemt du array */
			/* appel fonctÂaction sur chq ÃlÃmt d'array */
			action(array[i]);
}
