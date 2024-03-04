#include "main.h"
#include <stdio.h>

/**
 * *_memset - remplit ls n 1er bytes zn mmoire pointée s avc bytes const b.
 * @s: pointeur vers un caractère c'est la ou on va écrire les caractères
 * @b: carctère vers lequel s sera remplit
 * @n: nbr decarctère à remplir avec b
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++) /*parcourir les bytes de la zone de mémoire*/
	{
		*(s + i) = b; /* remplit chq bytes vec bytes const */
	}
	return (s); /* renvoie le pointeur vers la zone mémoire s */
}
