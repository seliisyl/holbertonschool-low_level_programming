#include "main.h"
#include <stdio.h>

/**
 * char *_strcat - concaténe la chaîne pointée par @src a
 * la fin de la chaîne pointée par @dest
 * @src: chaîne a concaténer
 * @dest: chaîne qui sera ajouté
 *
 * Return: return dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}




