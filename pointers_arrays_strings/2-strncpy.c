#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copie une chaîne source dans une chaîne de destination
 * @dest: cHaîne de destination
 * @src: chaine source a copier
 * @n: nombre maximal de caractère à copier
 *
 * Description : La fonction _strncpy copie au plus n caractères de la
 * chaîne pointée par src (y compris le caractère nul final) dans la chaîne
 * pointée par dest. Si la longueur de src est inférieure à n, la fonction
 * remplit les caractères restants de dest avec des caractères nuls.
 * Return: return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

