#include "main.h"
#include <stdio.h>

/**
 * print_square - print a square
 * @size: size of the square
 * Return: returns nothing
 */
void print_square(int size)
{
	int len1, len2;

	if (size <= 0)
		_putchar('\n');

	for (len1 = 0; len1 < size; len1++)
	{
		for (len2 = 0; len2 < size; len2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
