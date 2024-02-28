#include "main.h"
#include <stdio.h>

/**
 *swap_int - function that swaps the values of two integers.
 * @a: the firts integers
 * @b: the second integers
 */
void swap_int(int *a, int *b)
{
	int temp = *a; /* Stocke la valeur pointée par a dans une variable temp */
	*a = *b;       /* Affecte la valeur pointée par b à adress pointée par a */
	*b = temp;     /* Affecte la valeur temporaire à adress pointée par b */
}
