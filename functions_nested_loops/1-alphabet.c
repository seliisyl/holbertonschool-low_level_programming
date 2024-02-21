#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet - Prints the alphabetic
 *
 * Return:void
 */
void print_alphabet(void)
{
	char c;

	for (letter = 'a'; letter <= 'z'; letter++)
		write(1, &c, 1);

	write(1, "\n", 1);
}
