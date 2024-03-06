#include "main.h"
#include <stdio.h>

/**
 * factorial - retourne le factoriel d'un nombre donné.
 * @n: Le nombre pour lequel le factoriel est calculé.
 *
 * Return: Le factoriel de n, ou -1 en cas d'erreur.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);


	return (n * factorial(n - 1));
}
