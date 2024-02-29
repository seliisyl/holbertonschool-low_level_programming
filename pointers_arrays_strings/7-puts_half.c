#include "main.h"
#include <stdio.h>

/**
 * puts_half - print half of a string
 * @str: la chaîne à imprimer
 *
 * la fonction imprime la seconde moitié de la chaîne.
 * Si le nbre de ctère est impair, il print les n derniers ctère
 * de la chaine, ou n = (length_of_the_string - 1) / 2
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int n; /* Déclaration de la variable n */

	/* Calcul de la longueur de la chaîne */
	while (str[len] != '\0')
	{
		len++;
	}

	n = len / 2; /* Calcul de l'indice à partir duquel commencer l'affichage */

	if (len % 2 == 1)
/* Ajustemt de l'index de dprt pr ls chaînes de longueur impaire */
	{
		n = (len + 1) / 2;
	}

	/* Affichage des caractères à partir de l'indice calculé */
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
