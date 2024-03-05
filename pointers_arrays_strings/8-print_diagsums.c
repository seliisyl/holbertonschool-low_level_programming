#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Calcule la somme des deux diagonales d'une matrice carrée.
 * @a: une matrice carré d'entier.
 * @size: taille de la matrice.
 *
 * Return: retourne rien
 */
void print_diagsums(int *a, int size)
{
	int som1 = 0; /* somme de la 1er diagonale */
	int som2 = 0; /* somme 2e diagonale */
	int i, temp;

	/* calcul des som des diagonales */
	for (i = 0; i < size; i++)
	{
		som1 += a[i * size + i]; /*som élémt de la 1er diagonales */
		som2 += a[i * size + (size - 1 - i)]; /* som de la 2e digonales*/
	}

	/* impression des soms en utilisant putchar */
	/* imprimer la som de la diagonale principale */
	for (temp = som1; temp > 0; temp /= 10)
	{
		putchar(temp % 10 + '0'); /* imptime chq chiffre de la som */
	}
	putchar(' ');
	putchar(',');
	/* imprime la som de la diagonale second */
	for (temp = som2; temp > 0; temp /= 10)
	{
		putchar(temp % 10 + '0'); /* print chq chiffre de som */
	}
	putchar('\n');
}
