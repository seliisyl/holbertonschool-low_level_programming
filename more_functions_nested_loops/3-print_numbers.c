#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers from 0 to 9 
 *
 * return: returns nothing
 */
void print_numbers(void)
{
	int num = 48;
	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}
	_putchar(10);
}
