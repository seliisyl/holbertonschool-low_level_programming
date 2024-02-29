#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0; /* Initialisat° de l'indice d'itérat° */

	/* boucle pr cp les carctère de src vers dest */
	while (*(src + i) != '\0') /* tt que le ctère actuel de src non nul */
	{
		dest[i] = src[i];
		/* copie le caractère de src à la position i vers dest */
		i++; /* incrémenté l'indice d'itération */
	}

	dest[i] = '\0';
	/* ajte le crtère nul à la fin de dest pour ter la chaîne */
	return (dest); /* Return dest après la copie */
}
