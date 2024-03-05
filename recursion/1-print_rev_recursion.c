#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - imprime une cha√ne inverse
 * @s: caract√re actuel de la cha√ne
 * Return: return
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* si caract√re actuel es caract√re nul(fin de cha√ne */
	{
	return; /* arr√te la fonction */
	}
	_print_rev_recursion(s + 1); /* apl recurssivemt la fonct¬∞ ac le ct√re nul */
					putchar(*s);
}
