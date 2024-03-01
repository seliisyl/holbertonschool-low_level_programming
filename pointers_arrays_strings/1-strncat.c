#include "main.h"
#include <stdio.h>

/**
 * char *_strncat - concaténer 2 chaînes mais ajt le nbr d'octets d'entrée
 * @dest: chaîne à ajouter
 * @src: chaîne a completera la fin de dest
 * @n:ombre maximal d'octets à concaténer de src
 *
 * Return: retourne une nouvelle caîne concaténer
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0; /* Initialisation de la variable i */

	/* calculenla longueur de la chaîne de destinat° */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	/* parcourir la chaîne source et concaténer n caractères */
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	/* Ajouter le caractère nul à la fin de la chaîne de destination */
	dest[dest_len + i] = '\0';
	return (dest);
}
