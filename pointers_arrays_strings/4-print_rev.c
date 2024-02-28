#include "main.h"
#include <stdio.h>

/**
 * print_rev - Imprime une string en sens inverse, suivie d'une nvlle ligne.
 * @s: Pointeur vers la chaîne de caractèeres à imprimer en sens inverse.
 */
void print_rev(char *s)
{
	int len = 0;
	int i = 0;

	while (s[len] != '\0') /* calcul de la longueur de la chaîne */
	{
		len++; /* à chq itérat° boucle, i la vrble 'len' pr cmpt chq caractère */
	}
	for (i = len - 1; i >= 0; i--) /* imprimer la chaîne en sens inverse */
	{
		_putchar(s[i]); /* sert à afficher la chaîne en sens inverse */
	}
	_putchar('\n'); /* imprimer une nouvelle ligne */
}
