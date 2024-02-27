#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size:size parameter of triangle
 * Return:returns nothing
 */
void print_triangle(int size)
{
	int len1, len2;

	if (size > 0)
	{
		for (len1 = 1; len1 <= size; len1++)
		{
			for ((len2 = size - len1); len2 > 0; len2--)
				_putchar(' ');

			for (len2 = 0; len2 < len1; len2++)
				_putchar('#');

			if (len1 == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
