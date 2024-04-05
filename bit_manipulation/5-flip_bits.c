#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Calcl le nbre de bits différents entre deu nbr
 * @n: le 1er nbre
 * @m: le 2e nbre
 *
 * Return:  le nbre de bits differents entre n et m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m; /*Effectue un OU exclusif entre n et m */
	/* parcourt chq bit diff entre n et m pr compter le nbr de bits diff */
	while (diff != 0)
	{
		/* si bit de poids faible est 1, signifie une difference */
		count += diff & 1;
		/* decale diff vers la > pr examiner le bit suivant */
		diff >>= 1;
	}
	return (count);
}
