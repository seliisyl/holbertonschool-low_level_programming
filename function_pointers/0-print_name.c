#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - nom a prints
 * @name: nom a print
 * @f: fonction qui print name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		/* v�rifie si name  et f sont pas nul avt l'appel de la fonct� f */
		f(name);
	/* c l'apll a la fonct° f avc name mm argumt print le nom en utilisntf */
}
