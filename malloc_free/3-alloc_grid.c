#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creer un array bidemensionnel int
 * @width: nombre de colonne
 * @height: nolbres de lighes
 * Return: renvoieun pointeur vers array budiments int.
 */
int **alloc_grid(int width, int height)
{
	int i, j; /* variable boucle */
	int **grid; /* pointeur cers le tableau a 2D */

	/* verifie si la largeur ou la hauteur est invalide */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* alloue de la memoire pr le array de pointeur */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* alloue de la memoire pr chq ligne du array */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* en cas d'echec, libÃrer la mÃmoire prÃcÃd allouÃ©*/
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}
	/* init chq ÃlÃmt du array a 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
