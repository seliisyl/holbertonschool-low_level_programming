#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers n to 98
 * @n: The number from which to start printing.
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		n += (n < 98) ? 1 : -1;
	}
	printf("%d\n", n);

}
