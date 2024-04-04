#include <stdio.h>
#include "main.h"

/**
 * print_binary - print la representat°binaire d'un nombr
 * @n: Le nombre dont on veut imprimer la représentation binaire
 */
void print_binary(unsigned long int n)
{
	if (n > 1) /* verifie si n est > a 1 */
		/* appel recursivitéavc n n>1 decale de vers la droit */
		/* �a d�place tous les bits d'1vers la droite */
		print_binary(n >> 1);
			/* Print le dernier bite de n,& pour masquer tous les bits saus le dernier*/
			/* verifie si le dernier est 1 ou 0. SI 1 print 1 sinon 0 */
			putchar((n & 1) ? '1' : '0');
}
