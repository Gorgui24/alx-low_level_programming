#include "main.h"

/**
 * swap_int - swap two numbers
 * @a: first number to swap with second number(b)
 * @b: second number to swap with first(a)
 */

void swap_int(int *a, int *b)
{
	int sw = *b;
	int sws = *a;

	*a = sw;
	*b = sws;
}
