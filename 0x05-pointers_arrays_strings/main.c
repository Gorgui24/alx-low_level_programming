#include <stdio.h>
#include "main.h"
/**
 * main - print a to z
 *
 * Retun: 0
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);

}
