#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array of integers
 * @a: an array of integers
 * @n: parameter
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;

		while (start < end)
		{
			int temp = *start;
			*start = *end;
			*end = temp;

			start++;
			end--;
		}
}

