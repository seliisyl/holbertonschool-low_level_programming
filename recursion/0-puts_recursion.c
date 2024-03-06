#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - fonct° recursive qui print une chaîne de ctères + \n
 * @s: pointeur vers yne chaîne de cractères terminer par '\0'
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0') /* si le caractère courant est '\0' (fin de chîne */
	{
		_putchar(s[0]);
		_puts_recursion(s + 1); /* Apl récurssivemt la fonc */
	}
	else
		_putchar('\n');	/* imprime une nouvelle ligne */
}
