#include "main.h"
#include <stdio.h>

/**
 *_puts - Affiche une chaîne de caractères suivie d'un saut de ligne.
 * @str: Pointeur vers la chaîne de caractères à afficher.
 *
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
