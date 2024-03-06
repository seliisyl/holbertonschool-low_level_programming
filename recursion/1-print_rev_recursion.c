#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - imprime une cha√ne inverse
 * @s: caract√re actuel de la cha√ne
 * Return: return
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0') /* si caactr actuel es caractre nul(fin de chane */
	{
		_print_rev_recursion(s + 1); /* apl recurssivemt la fonct¬∞*/
						_putchar(s[0]);
						}
}
