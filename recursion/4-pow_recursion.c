#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - return value de x augmentéla puisance de y
 * @x: Entier representant de base.
 * @y: Entier représentant l'exposat
 *
 * Retour: power number
 */
int _pow_recursion(int x, int y)
{

	if (y == 0)
		return (1);

	if (y == 1)
		return (x); /* Erreur: résultat fractionnai */

	if (y > 1)
		/* Récursion : multiplie x par lui-même, enecrementant y */
		return (x * _pow_recursion(x, y - 1));

	else
		return (-1);
}
