#include <stdio.h>
#include <stdlib.h>

#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * positive_or_negative - print a number depending to if condition
 *
 *
 *
 * Return: Always 0 (Success)
 *
 */
void positive_or_negative(int i);
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
		printf("%d is positive\n", i);
	if (i == 0)
		printf("%d is zero\n", i);
	if (i < 0)
		printf("%d is negative\n", i);

}
