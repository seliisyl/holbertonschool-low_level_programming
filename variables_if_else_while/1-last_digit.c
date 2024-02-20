#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
		printf("Last digit of %d greater than 5\n", n);
	else if (last_digit == 0)
		printf("0\n");
	else
		printf("and is less than 6 and not 0\n");
	return (0);
}
