#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - foncyion cp n bytes de la zone memoire src vers dest
 * @dest:la destination où les données seront copiées.
 * @src: source des données à cp.
 * @n: C'est le nmbr d'octets à cp de src vers dest.
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (n > 0)
	{
	int i;
	int bytes = n;

		for (i = 0; i < bytes; i++)
		{
			dest[i] = src[i];
		}
		}
	return (dest);
}
