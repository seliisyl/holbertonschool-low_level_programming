#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - imprime cheesboard 
 * @a: a est un poiteur vers un tableau
 * @[8]: indique le tableau a une taille de 8 éléments.
 * Return: retourne rien 
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for ( j = 0; j < 8; i++)
		{
			putchar(a[i][j]);
			putchar(' ');
		}
		putchar('\n');
	}
}
