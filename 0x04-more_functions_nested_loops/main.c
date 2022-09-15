#include <stdio.h>
#include "main.h"
/**
 * main - check the code.
 *
 * Retun: Alwaays 0
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	_putchar('\n');
	return (0);

}
