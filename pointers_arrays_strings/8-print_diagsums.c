#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Calcule la somme des deux diagonales d'une matrice carrée.
 * @a: une matrice carrée d'entier.
 * @size: taille de la matrice.
 *
 * Return: retourne rien
 */
void print_diagsums(int *a, int size)
{
	int som1 = 0; /* somme de la 1ère diagonale */
	int som2 = 0; /* somme de la 2e diagonale */
	int *ptr = a; /* pointeur vers le début de la matrice */
	int i;

	/* calcul des sommes des diagonales */
	for (i = 0; i < size; i++)
	{
		som1 += *ptr; /* somme des éléments de la 1ère diagonale */
		ptr += size + 1; /* d�lamt vers l'él�t suivt sur 1�r diagonale */
	}

	ptr = a + size - 1; /* pointeur vers le dernier él�nt de 2e diagonale */

	/* calcul de la somme de la 2e diagonale */
	for (i = 0; i < size; i++)
	{
		som2 += *ptr; /* somme des éléments de la 2e diagonale */
		ptr += size - 1; /* d�lt vers l'él�t suivt sur 2e diagonale */
	}

	/* affichage des sommes avec putchar */
	/* afficher la somme de la première diagonale */
	for (; som1 > 0; som1 /= 10)
	{
		putchar(som1 % 10 + '0'); /* afficher chaque chiffre de la somme */
	}
	putchar(' ');
	putchar(',');
	/* afficher la somme de la deuxième diagonale */
	for (; som2 > 0; som2 /= 10)
	{
		putchar(som2 % 10 + '0'); /* afficher chaque chiffre de la somme */
	}
	putchar('\n');
}
