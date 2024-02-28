#include "main.h"
#include <stdio.h>

/**
 * rev_string - inverse une chaîne
 * @s: la chaîne à inverser.
 */
void rev_string(char *s)
{
	int length = 0;
	char *begin, *end, temp; /*Calcule la longueur de la chaîne */

	while (s[length] != '\0')
	{
		length++;
	}

	/* Définir les pointeurs de début et de fin de la chaîne */
	begin = s;
	end = s; /* Place le pointeur 'end' à la fin de la chaîne */

	for (int i = 0; i < length - 1; i++)
	{
		end++;
	}

	/* Inverse la chaîne en utilisant les pointeurs 'begin' et 'end'*/
	for (int i = 0; i < length / 2; i++)
	{
		/* Échange les caractères pointés par 'begin' et 'end' */
		temp = *end;
		*end = *begin;
		*begin = temp;

		/* Avance 'begin' et recule 'end' pour inverser la chaîne */
		begin++;
		end--;
	}
}
