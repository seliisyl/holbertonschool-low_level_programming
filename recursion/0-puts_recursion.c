#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - fonct° recursive qui print une chaîne de ctères + \n
 * @s: pointeur vers yne chaîne de cractères terminer par '\0'
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* si le caractère courant est '\0' (fin de chaiîne) */
	{
	putchar('\n'); /* imprime une nouvelle ligne */
	return;
	}

	putchar(*s); /* imprime le caractère courant */
	_puts_recursion(s + 1);
/* Appelle récurssivemt la fonction avec le caractère suivant */
}
