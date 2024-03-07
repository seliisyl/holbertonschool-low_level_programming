#include "main.h"
#include <stdio.h>

/**
 * is_divisible - Vérifie récursivement si unmbr est / par un autre nombre.
 * @n: Le nombre à vérifier s'il est divisible.
 * @i: Le nombre pour tester la divisibilité.
 *
 * Return: 1 si n est / par un nombre autre que 1 et lui-même, 0 sinon.
 */
int is_divisible(int n, int i)
{
	if (i == 1)
	{
		return (0); /* Le nombre n'est pas divisible par 1 */
	}
	if (i * i > n)
	{
		return (1); /* Aucun diviseur trouv� */
	}
	if (n % i == 0)
	{
		return (0); /* Le nombre est divisible par i */
	}
	return (is_divisible(n, i + 1));
}

/**
 * is_prime_number - Vérifie si un nombre est1er de manière récursive.
 * @n: Le nombre vérifier s'il est emier.
 *
 * Return: 1 si n est premier, 0 sinon.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0); /* Les nombres inférieurs ou éga 1 ne sont pas premiers */
	}
	return (is_divisible(n, 2)); /* Commence la vérificatio partir de 2 */
}
